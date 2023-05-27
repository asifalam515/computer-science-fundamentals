#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  int max=INT_MAX;
  int min=INT_MIN;
//   find the max one
  if(a>=min && b>=c)
  {
    max=a;
  }
  if(b>=c && c>=a)
  {
    max=b;
  }
  if(c>=a && a>=b)
  {
    max=c;
  }
//   find the min one:
 if(a<=b && b<=c)
  {
    max=a;
  }
  if(b<=a && a<=c)
  {
    max=b;
  }
  if(c<=b && b<=c)
  {
    max=c;
  }
cout<<min<<" "<<max;
    return 0;
}