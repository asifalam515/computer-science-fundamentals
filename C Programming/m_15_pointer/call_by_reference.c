#include<stdio.h>
void fun(int *p)
{
*p=500;
}
int main()
{
    int x=23;
 
    fun(&x);
       printf("X is %d",x);
    
  
    return 0;
}