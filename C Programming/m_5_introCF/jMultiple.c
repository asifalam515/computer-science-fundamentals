// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  if(a%b==0 || b%a==0)
  {
    printf("Multiples");
  }
  else{
    printf("No Multiples");
  }
    return 0;
}