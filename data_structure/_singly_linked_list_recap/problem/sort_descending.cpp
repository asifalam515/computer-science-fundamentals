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
void sort(Node *&head)
{

}
void descending(Node *&head)
{
Node *temp=head;
// Node *temp_2=head;
while(temp!=NULL)
{
    Node *temp_2=temp;
    while(temp_2!=NULL)
    {
          if(temp->value < temp_2->value)
    {
        // swap will occur here
        swap(temp->value,temp_2->value);
    }
    temp_2=temp_2->next;
    
    }
    temp=temp->next;
}
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
 descending(head);
print(head);
    return 0;
}