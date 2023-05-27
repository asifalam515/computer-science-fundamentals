#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
  cin>>arr[i];

  }
//   sorting:
for(int i=0;i<n-1;i++)
{
    for(int j =i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            // do swap
            swap(arr[i],arr[j]);
        }
        else{
            continue;
        }
    }
}

// print the sorted array
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}