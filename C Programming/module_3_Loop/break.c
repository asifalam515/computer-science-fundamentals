#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=50;i++)
    {
        if(i==15){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}