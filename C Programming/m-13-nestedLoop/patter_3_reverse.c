#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int k=n;
//   line 
for(int i=1;i<=n;i++)
{
    // kaj korte hobe ekhane
    for(int j=1;j<=k;j++)
    {
        printf("%d ",j);
    }
    k--;
    printf("\n");
}
    return 0;
}