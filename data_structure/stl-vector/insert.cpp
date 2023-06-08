#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={2,3,45,2,56};
//   v.insert(v.begin()+2,5556);
//   we also can insert an element from a vector:
vector<int>v2={23,45,2,762};
v.insert(v.begin()+2,v2.begin(),v2.end());

 for(int x:v)
 {

cout<<x<<" ";
 }

    return 0;
}