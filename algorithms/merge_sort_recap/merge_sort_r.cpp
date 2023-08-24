#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int r,int mid)
{
    int arr1_size=mid-l+1;
    int arr2_size=r-mid;
    int arr1[arr1_size], arr2[arr2_size];
    // int merged_arr[arr1_size+arr2_size];
      for (int i = 0; i < arr1_size; i++) {
        arr1[i] = arr[l + i];
    }
    for (int j = 0; j < arr2_size; j++) {
        arr2[j] = arr[mid + 1 + j];
    }
    int i=0,j=0,k=l;
    while(i<arr1_size && j<arr2_size)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
        i++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;

    }
    while(i<arr1_size)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<arr2_size)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void merged_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid = l + (r - l) / 2; 
    merged_sort(arr,l,mid);
    merged_sort(arr,mid+1,r);
    merge(arr,l,r,mid);
    }
    
}
int main()
{
  int arr[]={19,15,7,9,5,1};
  int n=sizeof(arr)/sizeof(arr[0]);
merged_sort(arr,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}