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
void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
int size_of_node(Node *head)
{
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
 Node *head=NULL;
 while (true)
 {
    int value;
    cin>>value;
    if(value==-1)break;
    // insert will be here
    insert(head,value);
 }
 
  int size=size_of_node(head);
    int mid=size/2;
  Node*temp=head;
  if((size%2)!=0)
  {
    for(int i=0 ;i<mid;i++)
    {
        temp=temp->next;
    }
    cout<<temp->value<<endl;
  }

  if((size%2)==0)
  {
    for(int i=0;i<mid-1;i++)
    {
        temp=temp->next;
    }
    cout<<temp->value<<endl;
    cout<<temp->next->value<<endl;
  }


    return 0;
}