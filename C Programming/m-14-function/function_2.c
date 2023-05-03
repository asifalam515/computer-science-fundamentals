#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
}

int main()
{
  int ans=sum();
  printf("%d",ans);
    return 0;
}