#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
  scanf("%s %s",a,b);
  int value=strcmp(a,b);
  if (value>0)
  {
    printf("B is smaller");

  }
  else if (value<0)
  {
    printf("A is smaller");
  }
  else{
    printf("Both are same");
  }
  
  
    return 0;
}