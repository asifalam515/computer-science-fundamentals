#include<bits/stdc++.h>
// https://docs.google.com/document/d/1A-0pT26spE08F7I6_NjYTRfBJnKmuSxFJB5x19Sm65o/edit
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
// check if ascending or not
bool is_sorted(Node *head)
{
    Node *i=head;
    // Node *j=head;
    
     while(i->next!=NULL)
     {
        if(i->value > i->next->value)
        {   
            return false;
        }
        i=i->next;
     }
     return true;
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
  bool ans=is_sorted(head);
  if(ans==true)
  {
    cout<<"YES";
  }
  else 
  {
    cout<<"NOt sorted";
  }
// print(head);
    return 0;
}