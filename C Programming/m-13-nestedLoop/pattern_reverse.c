#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int k=n;
  for(int i=0;i<n;i++)
  {
    // kaj
    for(int j=k;j>0;j--)
    {
        printf("*");
    }
    k--;
    printf("\n");
  }
    return 0;
}