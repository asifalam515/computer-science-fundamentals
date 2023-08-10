#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj_list[N];
bool visited[N];
bool dfs(int u,int parent)
{
   bool cycleExist=false;
    visited[u]=true;
    for(int child:adj_list[u])
    {
        if(child==parent)continue;
        if(visited[child]==true)return true;
        cycleExist=cycleExist||(child,parent);
    }
    return cycleExist;
}

int main()
{
 int n,m;
 cin>>n>>m;
 for(int i=1;i<=m;i++)
 {
    int u,v;
    cin>>u>>v;
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
 } 
 if(dfs(1,-1))
 {
    cout<<"cycle detected";
 }
 else{
    cout<<"no cycle detected";
 }
 bool is_cycle=false;
 for(int i=1;i<=n;i++)
 {
   if(visited[i])continue;
   is_cycle |=dfs(i);
 }
if(is_cycle)
{
   cout<<"cycle detected";
}
else{
   cout<<"no cycle"
}
    return 0;
}