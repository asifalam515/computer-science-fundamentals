#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int  adj_matrix[N][N];
int main()
{
  int n,m;
  cin>>n>>m;

  for(int i=0;i<m;i++)
  {
    int u,v,w;
    cin>>u>>v>>w;
    // directed hole
    adj_matrix[u][v]=w;
    // udirected hole both dibo
    adj_matrix[v][u]=w;
  }
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cout<<adj_matrix[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}