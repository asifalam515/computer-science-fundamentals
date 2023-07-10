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
void preOrder(Node *root)
{
    // base case
    if(root==NULL)return;
    cout<<root->value<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
  Node *root=new Node(10);
  Node *a=new Node(20);
  Node *b=new Node(60);
  Node *c=new Node(70);
  Node *d=new Node(30);
    Node *e=new Node(50);
      Node *f=new Node(40);
    // connection
    root->left=a;
    a->left=b;
    a->right=c;
    root->right=d;
    d->right=e;
    d->left=f;
    preOrder(root);

    return 0;
}