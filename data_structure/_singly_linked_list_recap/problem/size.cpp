#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
    int value;
    Node * next;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};
void insert(Node *&head,int value)
{
    Node *newNode=new Node(value);
    if(head==NULL)
    {
       
        head=newNode;
        return;
        
    }
    Node *temp=head;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    
    
}
int count_size(Node *head)
{
    int count=0;
    Node *temp=head;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void print(Node *head)
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    
}
int main()
{
  Node *head=NULL;
  while (true)
  {
    int x;
    cin>>x;
    if(x==-1)break;
    // insert
    insert(head,x);
  }
  
// print(head);
int ans=count_size(head);
cout<<ans<<endl;
    return 0;
}