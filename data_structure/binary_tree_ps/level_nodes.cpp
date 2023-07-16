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

int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r)+1 ;
}
void level_nodes(Node *root,int x)
{
  queue<pair<Node *,int> >q;
if(root)q.push({root,0});
while(!q.empty())
{
   pair<Node *,int>parent=q.front();
  q.pop();
  Node*node=parent.first;
  int level=parent.second;
  // cout<<level<<endl;
    if(level ==  x)
  {
    cout<<node->value<<" ";
  
  }
  
  
  
   if(node->left)q.push({node->left,level+1});
    if(node->right)q.push({node->right,level+1});
}

}

int main()
{
  
Node *root=input();
int x;
cin>>x;
if(maxHeight(root) <=x)
{
  cout<<"Invalid";
}
else
{
 level_nodes(root,x);
}

  


    return 0;
}