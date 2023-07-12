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
void level_order(Node *root)
{
    queue<Node *>q;

    q.push(root);
    while(!q.empty())
    {
    // step 1:ber kore ana
        Node *f=q.front();
        q.pop();
        //step 2: joabotio kaj korbo
        cout<<f->value<<" ";
    // step 3.tar children gulake rakha
    
    if(f->left)
    {
        q.push(f->left);
    }
     if(f->right)
    {
        q.push(f->right);
    }
   
    }
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
level_order(root);
    return 0;
}