#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
  int arr[n];
//   take input
for (int i = 0; i <n; i++)
{
    scanf("%d",&arr[i]);
}
// show output
for (int j = n-1; j>=0; j--)
{
    printf("%d\n",arr[j]);
}


    return 0;
}