#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v;
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.push_back(30);
   v.push_back(20);
   v.resize(3);
   v.resize(5);
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<endl;
   }
    return 0;
}