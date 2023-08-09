#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int adj_mat[N][N];
int main()
{
  int n,m;//number of nodes and edges
  cin>>n>>m;
//   input 
  for(int i=0;i<m;i++)
  {
    int u,v,w;
    cin>>u>>v>>w;
    adj_mat[u][v]=w;
  }
//   output
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cout<<adj_mat[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}