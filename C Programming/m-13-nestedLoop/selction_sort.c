// ascending order 
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
//   selection sort on ascending order started
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
       if (arr[i]>arr[j])
       {
        // swap
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
       
    }
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  
    return 0;
}