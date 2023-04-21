// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
#include<stdio.h>
#include<string.h>
int main()
{
  char s[1001],t[1001];
  scanf("%s",s);
 scanf("%s",t);
  int length_s=0;
  int length_t=0;
 int i=0;
 while (s[i] !='\0')
 {
    length_s++;
    i++;
 }
int j=0;
  while (t[j] !='\0')
 {
    length_t++;
    j++;
 }
 
  
  printf("%d %d\n",length_s,length_t);
  printf("%s %s",s,t);
    return 0;
}