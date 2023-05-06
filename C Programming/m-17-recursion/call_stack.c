#include<stdio.h>
void hello()
{
    printf("hello\n");
     
}
void world()
{
    hello();
    printf("World\n");
}
int main()
{
    world();
  printf("Main function called");

    return 0;
}