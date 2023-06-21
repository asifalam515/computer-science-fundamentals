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

void print_doubly_linked_list(Node *head,Node *tail)
{
Node *temp=head;
while (temp!=NULL)
{
   cout<<temp->value<<" ";
   temp=temp->next;
}


}
void delete_at_position(Node*&head,int position)
{
    Node *temp=head;
    for(int i=1;i<=position-1;i++)
    {
        temp=temp->next;
    }
    Node *deletNode=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete deletNode;
    
}
void delete_tail(Node *&tail)
{
Node*deleteNode=tail;
tail=tail->prev;
delete deleteNode;
tail->next=NULL;
}
void delete_head(Node *&head)
{
    Node *deleteNode=head;
    head=head->next;
    delete deleteNode;
    head->prev=NULL;
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
    int pos;
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"Invallid"<<endl;
    }
    else if(pos==0)
    {
        delete_head(head);
    }
    else if(pos=size(head)-1)
    {
        delete_tail(tail);
    }
    else
    {
        delete_at_position(head,pos);
    }
   

print_doubly_linked_list(head,tail);
//  print_doubly_linked_list_reverse(tail);
    return 0;
}