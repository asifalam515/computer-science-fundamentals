#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node *left;
  Node *right;
  Node(int value)
  {
    this->value=value;
    this->left=NULL;
    this->right=NULL;
  }  
};

Node * input_tree()
{
    int value;
    cin>>value;
    Node *root;
    if(value==-1)
    {
        root=NULL;
    }
    else {
        root=new Node(value);
    }
    queue<Node *>q;
    if(root){
        q.push(root);
    }
    while(!q.empty())
    {
        Node *p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *left;
        Node *right;
        if(l==-1)
        {
            left=NULL;
        }
        else{
            left=new Node(l);
        }
        if(r==-1)
        {
            right=NULL;
        }
        else
        {
            right=new Node(r);
        }
        // connection
        p->left=left;
        p->right=right;
         if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
       
    }
    return root;
}

void print(Node * root)
{
if(root==NULL)return;
queue<Node *>q;
q.push(root);
while (!q.empty())
{
// step 1:
Node *p=q.front();
q.pop();
cout<<p->value<<" ";
if(p->left)
{
    q.push(p->left);
}
if(p->right)
{
    q.push(p->right);
}
}

}

int max_height(Node *root)
{
if(root == NULL)return 0;
int l=max_height(root->left);
int r=max_height(root->right);
return 1+max(l,r);
}

int main()
{
  Node *root=input_tree();

cout<<max_height(root);

    return 0;
}