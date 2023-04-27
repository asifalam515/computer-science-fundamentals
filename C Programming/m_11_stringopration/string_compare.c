#include<stdio.h>
int main()
{
  char a[100],b[100];
  scanf("%s %s",a,b);
  int i=0;
  while (1)
  {
    //check is both ar null
    if (a[i]=='\0'&& b[i]=='\0')
    {
        printf("same\n");
        break;
    }
    // check is first  one got null?
    else if (a[i]=='\0')
    {
        printf("a is small");
        break;
    }
    // check is second one get null
    else if (b[i]=='\0')
    {  
         printf("b is small");
        break;
    }
    // none of them are null
    // 
    if (a[i]==b[i])
    {
        i++;
    }
    else if (a[i]<b[i])
    {
       printf("A is smaller \n");
       break;
    }
    else{
        printf("B is smaller");
        break;
    }
    
    
    
  }
  
    return 0;
}