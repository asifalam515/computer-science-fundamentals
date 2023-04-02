#include<stdio.h>
int main()
{
    int a=3;
    int b=20;
    // printf("enter two value ");
    // scanf("%d %d",&a ,&b);
    int sum=a+b;
    int subtraction=a-b;
    int multiply=a*b;
    //int division=b/a;এভাবে দিলে দশমিকের পরের কিছু আসবে না
    float division=b*1.0/a;
    //*1.0 b কে ফ্লোট করে নিবে আর ডাটা টাইপ ফ্লোট হয়ায় দশমিকের পরেও return করবে
    // printf("%d %d %d %d",sum,subtraction,multiply,division);
    // printf("%f",division);
    int remainder=a%b;
    int remainder_2=b%a;
    printf("%d %d",remainder,remainder_2);

    return 0;
}