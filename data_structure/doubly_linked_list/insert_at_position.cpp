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
void print_normal(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
       cout<<temp->value<<" ";
       temp=temp->next;
    }
    cout<<endl;

}
void insert_at_head(Node *&head,int value)
{
Node *newNode=new Node(value);
if(head==NULL)
{
    head=newNode;
    return;
}
newNode->next=head;
head->prev=newNode;
head=newNode;


}
void print_reverse(Node *tail)
{
    Node *temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void insert_at_position(Node *&head,int position,int value)
{
Node *newNode=new Node(value);
Node*temp=head;
for(int i=0;i<position-1;i++)
{
    temp=temp->next;
}
newNode->next=temp->next;
temp->next=newNode;
newNode->next->prev=newNode;
newNode->prev=temp;

}

int size(Node *head)
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
  Node *head=new Node(10);
  Node *a=new Node(20);
  Node *b=new Node(30);
  Node *c=new Node(40);
  Node *tail=c;
// connection
head->next=a;
a->prev=head;
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;
int pos,value;
cin>>pos>>value;
if(pos>=size(head))
{
   cout<<"Invallid"<<endl;
}
else{
     insert_at_position(head,pos,value);
}
print_normal(head);
print_reverse(tail);
    return 0;
}