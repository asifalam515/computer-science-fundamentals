#include<bits/stdc++.h>
using namespace std;
const int N=1e4+0;
int adj_matrix[N][N];
int main()
{
  int n,m;
  cin>>n>>m;
  int k;
  cin>>k;
  for(int i=0;i<m;i++)
  {
    int u,v;
    cin>>u>>v;
    adj_matrix[u][v]=1;
    adj_matrix[v][u]=1;
  }
int ans=0;
for(int i=0;i<n;i++)
{
    if(adj_matrix[k][i]==1)
    {
        ans++;
    }
}
cout<<ans<<endl;
    return 0;
}