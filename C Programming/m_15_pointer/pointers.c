#include<stdio.h>
int main()
{
  int x=100;
  int * ptr=&x;
  x=200;
  printf("value of x is :%d\n",*ptr);
//   printf("x er adderss: %d\n",ptr);
//   printf("x er value: %d\n",*ptr);
//   printf("x er address: %d\n",&ptr);
//   printf("ptr  er memory size: %d",sizeof(ptr));
    return 0;
}