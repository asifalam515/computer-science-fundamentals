#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<pair<int,int>>arr[N];
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=m;i++)
  {
    int u,v,w;
    cin>>u>>v>>w;
    arr[u].push_back({v,w});
    // arr[v].push_back(u);

  }
//   output
for(int i=1;i<=n;i++)
{
    cout<<"Index  "<<i<<": ( ";
    for(auto  value:arr[i])
    {
     cout<<value.first<<":";
     cout<<value.second<<" ";
    }
    cout<<")";
    cout<<endl;
}

    return 0;
}