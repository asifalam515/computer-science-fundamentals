#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
    fgets(a,16,stdin);
  int length=strlen(a);
  printf("%d",length);
    return 0;
}