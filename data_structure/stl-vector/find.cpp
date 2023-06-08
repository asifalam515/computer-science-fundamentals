#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={23,5,687,2,623,23,572,54,823};
auto it=find(v.begin(),v.end(),54);
if(it ==v.end())cout<<"Not found";
else cout<<"found";
 


    return 0;
}