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
bool is_duplicate(Node *head)
{
    Node *i=head;
    while (i!=NULL)
    {
        Node *j=i;
        while (j->next!=NULL)
        {
            if(i->value ==  j->next->value)
            {
                return true;
            }
            j=j->next;
        }
        i=i->next;
    }
    return false;
}
void insert(Node *&head,int value)
{
    Node *newNode=new Node (value);
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
void print(Node *head)
{
    Node *temp=head;
    while (temp!=NULL)
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
    insert(head,value);
  }
  
// print(head);
bool ans=is_duplicate(head);
if(ans==true)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
    return 0;
}