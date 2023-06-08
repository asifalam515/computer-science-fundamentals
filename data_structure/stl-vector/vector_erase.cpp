#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={23,34,56,2};
  v.erase(v.begin()+2,v.end()-1);
  for(int x:v)
  {
    cout<<x<<" ";
  }


    return 0;
}