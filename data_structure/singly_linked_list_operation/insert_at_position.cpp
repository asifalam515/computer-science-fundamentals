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

// insert at tail function
void insert_at_tail(Node * &head,int v)
{
    Node * newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
         cout<<"inserted at head"<<endl<<endl;
        return;
    }
    Node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    // temp ekhon last node ae ase
     temp->next=newNode;
    
}

// for print the linked list
void print_linked_list(Node*head)
{
    cout<<endl;
  
    cout<<"Your Linked List: "<<endl;
      Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }
    cout<<endl<<endl;
}

// insert at poistion
void insert_at_position(Node * head,int position,int value)
{
    Node * newNode=new Node(value);
    Node *temp=head;

    for(int i=1;i<position-1;i++)
    {
         temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode; 
    cout<<endl<<endl<<"inserted at position"<<position<<endl;
}
int main()
{
 Node *head=NULL; 
while (true)
{
     cout<<"Options 1: insert at tail: "<<endl;
     cout<<"Options 2:print LInked List"<<endl;
     cout<<"Options 3:Insert At any position: "<<endl;
     cout<<"Options 4:terminate"<<endl;


 int op;
 cin>>op;
 if(op==1)
 {
    int v;
    cout<<"Please Enter a value"<<endl;
    cin>>v;
    insert_at_tail(head,v);

 }
 else if(op==2)
 {
print_linked_list(head);
 }
 else if(op==3)
 {
    int position,value;
    cout<<"Enter the position";
    cin>>position;
    cout<<"Enter the value:";
    cin>>value;
    insert_at_position(head,position,value);


 }
 else if(op==4)
 {
    break;
 }
}

print_linked_list(head);
    return 0;
}