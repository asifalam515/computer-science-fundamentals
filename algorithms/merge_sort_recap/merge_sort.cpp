#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
int leftSize=m-l+1;
int rightSize=r-m;
int L[leftSize],R[rightSize];
int k=0;//for controll L
for(int i=l;i<=m;i++)
{
L[k]=arr[i];
k++;

}
k=0;
for(int i=m+1;i<=r;i++)
{
  R[k]=arr[i];
  k++;
}

int i=0,j=0;
int cur=l;
while(i<leftSize && j<rightSize)
{
  if(L[i] <= R[j])
  {
arr[cur]=L[i];
i++;
  }
  else
  {
    arr[cur]=R[j];
    j++;
  }
  cur++;
}

while(i<leftSize)
{
arr[cur]=L[i];
i++;
cur++;
}
while(j<rightSize)
{
  arr[cur]=R[j];
  j++;
  cur++;
}

}
void merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
      merge(arr,l,mid,r);
    }

}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
merge_sort(arr,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}