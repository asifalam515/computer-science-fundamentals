#include<stdio.h>
void fun(int x)
{
    x=100;
printf("%d\n",x);
printf("fun  er address: %p\n",&x);
}
int main()
{
  int x=10;
  fun(x);
  x=500;
printf("%d\n",x);
printf("main er address: %p",&x);
    return 0;
}