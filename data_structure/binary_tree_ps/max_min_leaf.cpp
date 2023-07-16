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
Node * input()
{
int value;
cin>>value;
Node *root;
if(value==-1)
{
root=NULL;
}
else{
    root=new Node(value);
}
// root node created.now it will be inserted to a line 
queue<Node*>q;
if(root)
{
    q.push(root);
}
while(!q.empty())
{
  Node *p=q.front();
q.pop();
// oder kaj korbo
Node *myleft;
Node *myright;
int l; 
int r;
cin>>l>>r;
if(l==-1)
{
  myleft=NULL;

}
else{
  myleft=new Node(l);
}
if(r==-1)
{
  myright=NULL;
}
else
{
  myright=new Node(r);
}
// ebar connect kore dibo
p->left=myleft;
p->right=myright;

// step 3 tader children der ke push kore dibo
if(p->left)q.push(p->left);
if(p->right)q.push(p->right);
}
return root;
}
int mx=INT_MIN;
int mn=INT_MAX;
void leaf_value(Node *root)
{
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)
    {
        // eta ekti leaf.
        // ebar tar value 
        if(root->value>=mx)
        {
            mx=root->value;
        }
        if(root->value<=mn)
        {
            mn=root->value;
        }
    }
    else{
        leaf_value(root->left);
    leaf_value(root->right);
    }

}

int main()
{
  
Node *root=input();
leaf_value(root);
cout<<mx<<" "<<mn;

    return 0;
}