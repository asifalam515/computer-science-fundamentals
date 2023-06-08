#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={23,45,2,476,12,72,9};
  replace(v.begin(),v.end(),2,100);
  for(int x:v)
  {
    cout<<x<<" ";
  }

    return 0;
}