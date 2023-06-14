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
void insert_at_tail(Node *&head,int value)
{
    // new node create kori
    Node *newNode=new Node(value);
    // jodi head null thake tahole newNode kei head banaye di
    if (head==NULL)
    {
        head=newNode;
        return;
    }
    Node *temp=head; //traverse korar jonn temp nilam

    // ebar amra last node ta khuje ber korbo
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    // ebar amra last er nul e cole eseche
    // ebar null ta ke/next ke newNode diiye replace kore dibo
    temp->next=newNode;
    
}
// print korbo linked list ta
void print_linked_list(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }

}

int main()
{
  Node *head=NULL;
  insert_at_tail(head,100);
  print_linked_list(head);

    return 0;
}