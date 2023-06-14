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
/*
*/
void inset_at_any_position(Node *&head,int position,int value)
{
    Node *newNode=new Node(value);
    Node *temp=head;
    for(int i=1;i<=position-1;i++)
    {
        temp=temp->next;
        // index /position jodi ulta palta kisu dey
        if(temp==NULL)
        {
            cout<<"Invalid Index"<<endl<<endl;
            return;
        }
    }
newNode->next=temp->next;
temp->next=newNode;
cout<<endl<<endl;
}

// insert at head:
void insert_at_head(Node *&head,int value)
{
Node * newNode=new Node(value);
newNode->next=head;
head=newNode;
 cout << endl
         << "Inserted at head" << endl
         << endl;
}

// delete from position
void  delete_from_position(Node *&head,int position)
{
    Node *temp=head;
for(int i=1;i<=position-1;i++)
{
    temp=temp->next;
}
Node *deleteNode=temp->next;
temp->next=temp->next->next;
delete deleteNode;
cout<<"deleted position "<<position<<endl;
}

// print
void print_linked_list(Node *head)
{
    Node *temp=head;
while (temp!=NULL)
{
   cout<<temp->value<<endl;
   temp=temp->next;
}
}

// delete head
void delete_head(Node *&head)
{
Node *deleteNode=head;
head=head->next;
delete deleteNode;
cout<<"deleted head "<<endl;
}

int main()
{
  Node *head=NULL;
 while (true)
 {
   
       cout<<"What you want to do?"<<endl;
       cout<<"1 for insert at head"<<endl;
       cout<<"2 for insert at tail"<<endl;
       cout<<"3 for insert at any position"<<endl;
       cout<<"4 for print your linked list"<<endl;
       cout<<"5 for stop the programme"<<endl;
       cout<<"6 for delete from position"<<endl;
       cout<<"7 for delete head"<<endl;
       cout<<endl<<endl<<endl;
  int options;
     cin>>options;

  if(options ==1)
  {
  cout<<"Enter head value"<<endl;
  int value;
  cin>>value;
 insert_at_head(head,value);
 
  }
   if(options==2)
  {
    cout<<"Enter value that you want to insert at tail: "<<endl;
    int value;
    cin>>value;
insert_at_tail(head,value);
  }
  else if(options ==3)
  {
     int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                inset_at_any_position(head, pos, v);
            }
  }
  
else if(options ==4)
{
    cout<<"Yoour LInked list is: "<<endl;
       print_linked_list(head);
}

else if(options==5)
{
    cout<<"Terminate the programme"<<endl;
    break;
}
else if(options==6)
{
    int position;
    cout<<"Enter Your position"<<endl;
    cin>>position;
    if(position==0)
    {
        delete_head(head);
    }
    else{
        delete_from_position(head,position);
    }
    
    
}
else if(options==7)
{
    delete_head(head);
}

 }
    
   
    
 
    return 0;
}