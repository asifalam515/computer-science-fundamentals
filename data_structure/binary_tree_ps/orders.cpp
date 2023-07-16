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
void pre_order(Node *root)
{
    if(root==NULL)return;
    cout<<root->value<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
void post_order(Node *root)
{
    if(root==NULL)return;
    post_order(root->left);
    post_order(root->right);
    cout<<root->value<<" ";
}
void in_order(Node *root)
{
    if(root ==NULL)return;
    in_order(root->left);
    cout<<root->value<<" ";
    in_order(root->right);
}
int main()
{
   Node *root=new Node(10);
  Node *a=new Node(20);
  Node *b=new Node(40);
  Node *d=new Node(30);
  Node *c=new Node(50);
  Node *e=new Node(60);
//   connection
root->left=a;
root->right=d;
a->right=c;
a->left=b;
d->right=e;

// pre_order(root);
// post_order(root);
in_order(root);

    return 0;
}