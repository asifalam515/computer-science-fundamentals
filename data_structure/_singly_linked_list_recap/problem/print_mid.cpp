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
void insert(Node *& head,int value)
{
    Node *newNode=new Node(value);
    if(head ==NULL)
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
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
int size_of_node(Node *head)
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
void print_mid_element(Node *head)
{

}
int main()
{
Node *head=NULL;  
while (true)
{
    int value;
    cin>>value;
    if(value==-1)break;
    insert(head,value);
}
int size=size_of_node(head);
if((size%2)!=0)
{
    Node *temp=head;
    for(int i=1;i<=size/2;i++)
    {
        temp=temp->next;
    }
    cout<<temp->value<<endl;
}
 else if((size%2)==0)
{
       Node *temp=head;
    for(int i=1;i<size/2;i++)
    {
        temp=temp->next;
    }
    cout<<temp->value<<" "<<temp->next->value;
}
// cout<<size;
// print(head);
    return 0;
}