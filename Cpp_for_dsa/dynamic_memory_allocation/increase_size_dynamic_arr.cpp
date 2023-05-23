#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *arr=new int[5];
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }
 int *brr=new int[7];
  for(int i=0;i<7;i++)
{
    brr[i]=arr[i];

}
brr[5]=234;
brr[6]=98;
for(int i=0;i<7;i++)
{
    cout<<brr[i]<<" ";
}
// delete an element
delete []arr;
    return 0;
}