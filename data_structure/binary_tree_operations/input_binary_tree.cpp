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
Node * input_tree()
{
    int value;
    // প্রথমে root এর ভ্যালু ইনপুট নিবো।
    cin>>value;
    // root create korlam
    Node*root;
//যদি ইনপুট ভ্যালু -১ হয় তার মানে রুট নাল,
// যদি অন্যকিছু হয়য় তাহলে সেটি রুত এর ভ্যালু
    if(value==-1)
    {
        root=NULL;
    }
    else
    {
        root=new Node(value);
    }
    // নোডের পয়েন্টার এর queue নিবো। রুট নাল না হলে 
    // ভ্যলু পুশ করে দিবো
    queue<Node *>q;
    if(root)
    {
        q.push(root);
    }
    // যতক্ষন আমার কিঊ খালি না হয় ততক্ষন তিনটি কাজ করতে থাকবে
    // ধাপ ১->কিঊ হতে বের করবো
    // ধাপ২->তার কাজ করবো
    // ধাপ ৩->চিল্ড্রেন থাকলে সেগুলো কিঊ তে নিবো
    while (!q.empty())
    {
        // 1.বের করে আনা
        Node *p=q.front();
        q.pop();
        //২ তার যাবতীয় সকল কাজ করা
    int l,r;
    cin>>l>>r;
    Node *left;
    Node *right;
    if(l==-1)
    {left=NULL;}
    else{
left=new Node (l);
    } 
if(r==-1)
{
    right=NULL;
}
else
{
    right=new Node(r);
}
// connection kore dite hobe parent er sathe
p->left=left;
p->right=right;
    // ৩।চিল্ডেন গুলোকে পুশ করা
    if(p->left)
    {
        q.push(p->left);
    }
    if(p->right)
    {
        q.push(p->right);
    }
    }
    return root;
}

void level_order(Node *root)
{
    if(root==NULL)
    {
        cout<<"tree nai"<<endl;
    return;
    }
    queue<Node *>q;
    q.push(root);
    while (!q.empty())
    {
        Node *f=q.front();
        q.pop();
        cout<<f->value<<" ";
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
Node *root=input_tree();
level_order(root);
    return 0;
}