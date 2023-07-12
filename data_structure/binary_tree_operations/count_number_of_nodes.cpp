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
int count(Node *root)
{
    // base case
    if(root==NULL)return 0;
    int l=count(root->left);
    int r=count(root->right);
    return l+r+1;

}
int main()
{
  Node *root=input_tree();
//   print(root);
int ans=count(root);
cout<<ans<<endl;
    return 0;
}