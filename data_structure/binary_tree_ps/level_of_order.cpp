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
    while(!q.empty())
    {
        // step 1;
        Node *f=q.front();
        q.pop();
        // step 2:do his job
        cout<<f->value<<" ";
        // step 3:
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
level_of_order(root);
    return 0;
}