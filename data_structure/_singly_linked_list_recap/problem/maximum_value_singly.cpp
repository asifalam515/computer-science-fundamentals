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
int maximum_value(Node *&head)
{
    Node *temp=head;
    int max=temp->value;
    while (temp!=NULL)
    {
        if(temp->value >= max)
        {
            max=temp->value;
        }
        temp=temp->next;
    }
    return max;
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
//  print(head);
int ans=maximum_value(head);
cout<<ans<<endl;
    return 0;
}