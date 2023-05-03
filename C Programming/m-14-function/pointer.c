#include<stdio.h>
int main()
{
  int x=234;

//   poiner
int * p=&x;
// printf("%p\n",p);
// dereference
// to get value use *
printf("%d\n",*p);
// update value by using pointer
*p=500;
printf("%d",x);
    return 0;
}