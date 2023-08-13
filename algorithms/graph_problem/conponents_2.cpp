#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj_list[N];
bool visited[N];
void dfs(int u,vector<vector<int>>&v,int cc)
{
visited[u]=true;
v[cc].push_back(u);
for(int val:adj_list[u])
{
    if(!visited[val])
    {
        dfs(val,v,cc);
    }
}
}

int main()
{
  int n,m;
  cin>>n>>m;
  vector<vector<int>>v(n+1);
  int cc=0;
  for(int i=0;i<m;i++)
  {
    int u,v;
    cin>>u>>v;
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);

  }
for(int i=0;i<n;i++)
{
    if(!visited[i])
    {
        dfs(i,v,cc);
        cc++;
    }
}
vector<int>vv;
for(int i=1;i<=cc;i++)
{
    vv.push_back(v[i].size());
}
sort(vv.begin(),vv.end());
for(int i=0;i<vv.size();i++)
{
    if(vv[i]>1)
    {
        cout<<vv[i]<<" ";
    }
}
    return 0;
}