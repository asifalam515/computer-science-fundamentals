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
void level_of_order(Node *root)
{
  queue<Node *>q;
  q.push(root);
  while(!q.empty())
  {
    if(root==NULL)return;
    // step one value te anbo
    Node *f=q.front();
    // ber korbo
    q.pop();
    // step 2 ja kaj tai krbo
    cout<<f->value<<" ";
    // step 3 children add kore dibo
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
bool search(Node *root,int x)
{
    if(root==NULL)return false;
    if(root->value ==x)return true;
    if(x < root->value)
    {
        // bool l=search(root->left,x);
        // if(l==true)return true;
        // else return false;
        return search(root->left,x);
    }
    else
    {
        return search(root->right,x);
    }
}
int main()
{
  
Node *root=input();
if(search(root,100)) cout<<"YES,found"<<endl;
else cout<<"Not found"<<endl;
level_of_order(root);
    return 0;
}