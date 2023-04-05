#include<stdio.h>
int main()
{
    int i;
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    long long int sum=0;
    for ( i = 0; i <= n; i++)
    {
         sum=sum+i;
        
    }
    printf("%lld",sum);
    

    return 0;
}