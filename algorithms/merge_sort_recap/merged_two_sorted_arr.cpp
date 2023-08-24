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
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
merge(arr,0,3,n-1);//array er duita part dilam.first part 0 hote 3 porjonto and second part 4 hote sesh porjonoto
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}