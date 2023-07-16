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

int count_node(Node *root)
{
 if(root==NULL)return 0;
 int l=count_node(root->left);
 int r=count_node(root->right);
 return l+r+1;

}

void number_of_level(Node *root)
{
    bool frq[100000]={false};
    queue<pair<Node *,int>>q;
    if(root)q.push({root,0});
    vector<int>v;
    while (!q.empty())
    {
        pair<Node *,int>parent=q.front();
        q.pop();
        Node *node=parent.first;
        int level=parent.second;
        if(frq[level] ==true)
        {
            
        }
    }
    
}

int main()
{
  
Node *root=input();
int x;
cin>>x;
// if(x>=count_node(root))
// {
//   cout<<"Invalid"<<endl;
// }
// else{
// level_nodes(root,x);
// }
 
  


    return 0;
}