#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  char arr[n];
  scanf("%s",arr[n]);
  int sum=0;
  for (int i = 0; i < n; i++)
  {
    int digit=arr[i]-48;
    sum=sum+digit;
  }
  printf("%d ",sum); 
    return 0;
}