#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d ",&arr[i]);
  }
  int x;
  
  scanf("%d",&x);
  int ans=0;
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
       if (arr[i]+arr[j]==x)
       {
        ans=1;
       }
      
       
    }
}
if (ans==0)
{
    printf("no");
}
else{
    printf("yes");
}

    return 0;
}