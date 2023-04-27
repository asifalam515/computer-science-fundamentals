#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
  scanf("%d",&arr[i]);
  }
  int count[7]={0};
  for (int i = 0; i < n; i++)
  {
   int value=arr[i];
   count[value]++;
  }
for (int i = 0; i < 6; i++)
{
    printf("%d is appeared %d\n",i,count[i]);
}

    return 0;
}