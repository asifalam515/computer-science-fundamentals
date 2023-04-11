#include<stdio.h>
int main()
{
  int arr[5];
//   give input of arr arrays
for (int i = 0; i < 5; i++)
{
    scanf("%d",&arr[i]);
}
// print the value of the array
for (int  j = 0; j < 5; j++)
{
    printf("%d\n",arr[j]);
}

    return 0;
}