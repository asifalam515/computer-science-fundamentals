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
void level_of_order(Node *root)
{
    queue<Node *>q;
    q.push(root);
    while (!q.empty())
    {
        // step 1:ber kore anbo
        Node *f=q.front();
        q.pop();
        // step 2:
        cout<<f->value<<" ";
        // step 3:
        // tar children gulakew dhukabo
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
  Node *b=new Node(30);
  Node *c=new Node(40);
  Node *d=new Node(90);
  Node *e=new Node(50);
  Node *f=new Node(60);
  Node *g=new Node(100);
  Node *h=new Node(70);
  Node *i=new Node(80);
//   connection
root->left=a;
a->left=c;
c->right=f;
a->right=d;
d->right=g;
root->right=b;
b->left=e;
e->right=i;
e->left=h;

level_of_order(root);
    return 0;
}