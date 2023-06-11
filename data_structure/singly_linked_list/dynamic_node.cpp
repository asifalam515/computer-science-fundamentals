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

//   নোড পয়েন্টার দেয় তাই *
Node *head=new Node(10);
Node *a=new Node(20);
Node *b=new Node(30);
// a নিজেই একতি পয়েন্টার তার মানে a তে আড্রেস আছে।তাই আমাদের আর আড্রেস মেনশন করে দিতে হবে না
head->next=a;
a->next=b;
cout<<head->value<<endl;
cout<<head->next->value<<endl;
cout<<head->next->next->value<<endl;

    return 0;
}