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
int main()
{
  Node *  head=new Node(10);
  Node *a=new Node(20);
  Node *b=new Node(30);
  head->next=a;
  a->next=b;
  Node *temp=head;
  while (temp !=NULL)
  {
    cout<<temp->value<<endl;
    temp=temp->next;
  }
  

    return 0;
}