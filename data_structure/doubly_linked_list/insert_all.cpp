#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
    int value;
    Node * next;
    Node *prev;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
        this->prev=NULL;
    }
};
int size(Node *head)
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
void insert_at_head(Node *&head,Node *&tail,int value)
{
Node *newNode=new Node(value);
if(head==NULL)
{
    head=newNode;
    tail=newNode;
    return;
}
newNode->next=head;
head->prev=newNode;
head=newNode;

}
void insert_at_position(Node *&head,int position,int value)

{
Node *newNode=new Node(value);
Node *temp=head;
for(int i=1;i<=position-1;i++)
{
temp=temp->next;
}
newNode->next=temp->next;
temp->next=newNode;
newNode->next->prev=newNode;
newNode->prev=temp;
}
void insert_at_tail(Node *&head,Node *&tail,int value)
{
Node *newNode=new Node(value);
if(tail==NULL)
{
head=newNode;
tail=newNode;
return;
}
tail->next=newNode;
newNode->prev=tail;
tail=tail->next;

}
void print_doubly_linked_list(Node *head,Node *tail)
{
Node *temp=head;
while (temp!=NULL)
{
   cout<<temp->value<<" ";
   temp=temp->next;
}


}

void print_doubly_linked_list_reverse(Node *tail)
{
    Node *temp=tail;
    while (temp!=NULL)
    {    cout<<temp->value<<" ";
    temp=temp->prev;
    }
    

    
}
int main()
{
  
  Node *head=new Node(10);
 
  Node *a=new Node (20);
  Node *b=new Node(30);
  Node *c=new Node(40);
  Node *d=new Node(50);
  Node *tail=d;
  head->next=a;
  a->prev=head;
  a->next=b;
  b->prev=a;
  b->next=c;
  c->prev=b;
    c->next=d;
    d->prev=c;
int position,value;
cin>>position>>value;
if(position>size(head))
{

    cout<<"Invallid"<<endl;
}
else if(position==0)
{
    insert_at_head(head,tail,value);
}
else if(position==size(head))
{
    insert_at_tail(head,tail,value);
}
else{
    insert_at_position(head,position,value);
}

print_doubly_linked_list(head,tail);
//  print_doubly_linked_list_reverse(tail);
    return 0;
}