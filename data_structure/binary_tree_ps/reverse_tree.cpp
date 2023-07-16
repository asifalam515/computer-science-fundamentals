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
vector<int> print_reverse(Node *root)
{
    vector<int>v;

    queue<Node *>q;
    if(root)q.push(root);
    while(!q.empty())
    {
        Node *f=q.front();
        q.pop();
        v.push_back(f->value);
         if(f->right)q.push(f->right);
        if(f->left)q.push(f->left);
       
    }
    reverse(v.begin(),v.end());
    return v;
}

int main()
{
  
Node *root=input();
vector<int>ans=print_reverse(root);

for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
    return 0;
}