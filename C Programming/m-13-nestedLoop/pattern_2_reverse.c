#include<stdio.h>
int main()
{
  int n,s=0;
  scanf("%d",&n);
  int k=(2*n-1);
  
  for(int i=0;i<n;i++)
  {
    // kaj
    for (int j = 0; j < s; j++)
    {
     printf(" ");
    
    }
    for(int j=0;j<k;j++)
    {
        printf("*");
    }
    s+=1;
    k-=2;
    printf("\n");
  }
    return 0;
}