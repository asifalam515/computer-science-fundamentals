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

int size(Node *head)
{
    Node *temp=head;
    int count=0;

    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
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
int main()
{
  Node *head=NULL;
  Node *head_2=NULL;
  while (true)
  {
    int value;
    cin>>value;
    if(value==-1)
    {
        break;
    }
    // insert at tail
    insert(head,value);
  }
//   input for second linked list
while (true)
  {
    int value;
    cin>>value;
    if(value==-1)
    {
        break;
    }
    // insert at tail
    insert(head_2,value);
  }
  
// print(head);
if(size(head) ==  size(head_2))
{
    cout<<"similar sized"<<endl;
}
else 
{
    cout<<"No similar"<<endl;
}
    return 0;
}