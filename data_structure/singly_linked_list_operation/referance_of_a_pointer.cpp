#include<bits/stdc++.h>
using namespace std;
void fun(int * &p)
{
cout<<p<<endl;
}
int main()
{
  int value=10;
  int *ptr=&value;
  fun(ptr);
  cout<<ptr<<endl;

    return 0;
}