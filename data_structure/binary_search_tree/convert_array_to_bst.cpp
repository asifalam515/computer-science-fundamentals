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
Node * convert(int arr[],int n,int l,int r)
{
   if(l>r)return NULL;
    int mid=(l+r)/2;
    Node *root=new Node(arr[mid]);
    Node *leftRoot=convert(arr,n,l,mid-1);
    Node *rootRight=convert(arr,n,mid+1,r);
    root->left=leftRoot;
    root->right=rootRight;
    return root;
}
int main()
{
  
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
Node *root=convert(arr,n,0,n-1);
level_of_order(root);
    return 0;
}