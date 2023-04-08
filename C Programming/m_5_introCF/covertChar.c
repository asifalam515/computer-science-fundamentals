// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if (c>='a' && c<='z')
    {
    //   small .will cover to captial;
    int ans=c-32;
    printf("%c",ans);
    }
    else{
         int ans=c+32;
    printf("%c",ans);
    }
    
    return 0;
}