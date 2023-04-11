#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  int sum=0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
//   sum of array elements
for (int  j = 0; j < n; j++)
{
    sum=sum+arr[j];
   
}
 printf("%d",sum);

    return 0;
}