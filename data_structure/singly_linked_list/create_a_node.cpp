#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node *next;

};
int main()
{
  Node a,b;
  a.value=10;
  a.next=&b;
  b.value=20;
  b.next=NULL;
  cout<<a.next->value<<endl;

    return 0;
}