#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>arr[N];
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=m;i++)
  {
    int u,v;
    cin>>u>>v;
    arr[u].push_back(v);
    // arr[v].push_back(u);

  }
//   output
for(int i=1;i<=n;i++)
{
    cout<<"Index  "<<i<<": ( ";
    for(int value:arr[i])
    {
        cout<<value<<" ";
    }
    cout<<")";
    cout<<endl;
}

    return 0;
}