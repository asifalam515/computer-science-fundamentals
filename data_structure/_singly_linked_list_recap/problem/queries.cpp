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
void print(Node *head)
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int size_of_linked_list(Node *head)
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
void insert_at_head(Node *&head,int value)
{
    Node *newNode=new Node(value);
    
newNode->next=head;
head=newNode;
}
void insert_at_tail(Node *&head,int value)
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
void insert_at_any_position(Node *&head,int index,int value)
{
    Node *newNode=new Node(value);
    Node *temp=head;
    for(int i=1;i<=index-1;i++)
    {
        temp=temp->next;

    }
    newNode->next=temp->next;
    temp->next=newNode;
    
}
int main()
{
  Node *head=NULL;
  while(true)
  {
    int value;
    cin>>value;
    if(value==-1)break;
    insert_at_tail(head,value);
  }
  int q;
  cin>>q;
  while (q--)
  {
    int index,v;
    cin>>index>>v;
    if(index==0)
    {
        // insert at head
        insert_at_head(head,v);
    }
    else if(size_of_linked_list(head)==index)
    {
        insert_at_tail(head,v);
    }
    else if(index>size_of_linked_list(head))
    {
        cout<<"Invalid"<<endl;
        continue;
    }
    else 
    {
        // insert at any position will  be here
        insert_at_any_position(head,index,v);
        
    }
print(head);
  }
  
// print(head);
    return 0;
}