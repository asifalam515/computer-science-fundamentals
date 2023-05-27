#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int maximum;
  int min=INT_MIN;

  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
   
  }

  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
    maximum=max(arr[i],arr[j]);

    }
  }
 
cout<<maximum;
    return 0;
}