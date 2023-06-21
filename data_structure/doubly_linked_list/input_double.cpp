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


void print_doubly_linked_list(Node *head)
{
Node *temp=head;
while (temp!=NULL)
{
   cout<<temp->value<<" ";
   temp=temp->next;
}


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
  
Node *head=NULL;
Node *tail=NULL;
int value;
while (true)
{
    cin>>value;
    if(value==-1)break;
    insert_at_tail(head,tail,value);
}
print_doubly_linked_list(head);
print_doubly_linked_list_reverse(tail);
    return 0;
}