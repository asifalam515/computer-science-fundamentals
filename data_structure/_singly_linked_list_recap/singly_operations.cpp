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

int size(Node *head)
{
    Node *temp=head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void insert_at_any_pos(Node *head,int position,int value)
{
    Node *newNode=new Node(value);
   
    Node *temp=head;
    for(int i=0;i<position-1;i++)
    {
        temp=temp->next;
    }
    // ekhane insert korte parbo
    newNode->next=temp->next;
    temp->next=newNode;
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
void print(Node *head)
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    
}
void delete_element(Node *head,int delete_pos)
{
    Node *temp=head;
    for(int i=0;i<delete_pos-1;i++)
    {
        temp=temp->next;
    }
    Node *deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
    
}
int main()
{
  Node *head=new Node (10);
  Node *a=new Node(20);
  Node *b=new Node(30);
  Node *c=new Node(40);
  head->next=a;
  a->next=b;
 b->next=c;
 int value,position;
 cin>>value>>position;
insert_at_any_pos(head,position,value); 
if(position==0)
{
    insert_at_head(head,value);
}
else if(position==size(head))
{
    insert_at_tail(head,value);
}
else if(position>size(head))
{
    cout<<"Invalid";
}
else 
{
    insert_at_any_pos(head,position,value);
}
delete_element(head,4);
  print(head);
 

    return 0;
}