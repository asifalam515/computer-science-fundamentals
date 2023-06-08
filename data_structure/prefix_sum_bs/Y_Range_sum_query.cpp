#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,q;
  cin>>n>>q;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  //test case এর ক্ষেত্রে এই কাজটি করতে পারি।০ না হওয়া পযন্ত চলে থাকবে
  while (q--)
  {
   int l,r;
   cin>>l>>r;
    l--;
    r--;
    int sum=0;
    for(int i=l;i<=r;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
  }
  
    return 0;
}