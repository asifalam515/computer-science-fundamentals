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
void insert_at_tail(Node * &head,int value)
{
    Node *newNode=new Node(value);
if(head==NULL)
{
head=newNode;
return;
}
Node  * temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
// temp ebar null element e cole eseche:
//null ke amara new node set kore dibo
temp->next=newNode;
}

//ebar linked list ta print kori
void print_node(Node *head)
{
    Node * temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }
    
}

int main()
{
  Node*head=NULL;
//   insert_at_tail(Node * head,10);
insert_at_tail(head,30);
insert_at_tail(head,50);
insert_at_tail(head,80);
print_node(head);

    return 0;
}