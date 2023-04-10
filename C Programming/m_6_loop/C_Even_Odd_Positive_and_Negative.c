#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a;
  int even=0,odd=0,negetive=0,positive=0;
  for (int i = 1; i <=n; i++)
  {
    scanf("%d",&a);
    // a এর ভ্যালু লুপের মাধ্যমে নিবো।Value of a will be updated and old value will be deleted.So we have to apply the condition here
    if (a%2==0)
    {
        // even
        even++;
    }
    else
    {
        odd++;
    }
    if (a>0)
    {
        positive++;
    }
    else if(a<0)
    {
        negetive++;
    }
    
    
    
    

  }
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,positive,negetive);
  
    return 0;
}