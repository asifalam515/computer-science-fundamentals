#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,q;
  cin>>n>>q;
  long long int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
long long int prefix[n];
prefix[0]=a[0];
for(int i=1;i<n;i++)
{
    prefix[i]=a[i]+prefix[i-1];
}


  while (q--)
  {
   int l,r;
   cin>>l>>r;
    l--;
    r--;
long long int sum=0;
if(l==0)
{
    sum=prefix[r]-0;
}
else{
    sum=  prefix[r]-prefix[l-1]; 
}
    cout<<sum<<endl;
  }
  
    return 0;
}