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
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void normal_print(Node *head)
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    
}
void reverse_print(Node *head)
{
    Node *temp=head;
    if(temp==NULL) return;
    reverse_print(temp->next);
    cout<<temp->value<<" ";
    
}
int main()
{
Node *head=NULL;
while (true)
{
    int value;
    cin>>value;
    if(value== -1)break;
    insert(head,value);
}
// normal_print(head);
reverse_print(head);
    return 0;
}