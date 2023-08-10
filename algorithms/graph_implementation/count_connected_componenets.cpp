#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj_list[N];
bool visited[N];
void dfs(int parent)
{
    visited[parent]=true;
    for(int child:adj_list[parent])
    {
        if(visited[child]==true)continue;
        dfs(child);
    }
}
void bfs(int parent)
{
    queue<int>q;
    q.push(parent);
    visited[parent]=true;
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();
        for(int child:adj_list[parent])
    {
        if(visited[child]==true)continue;
        q.push(child);
        visited[child]=true;

    }
    }
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
 int connected_componenets=0;
 for(int i=1;i<=n;i++)
 {
    if(visited[i])continue;
    dfs(i);
    connected_componenets++;

 }
 cout<<"cc "<<connected_componenets<<endl;

    return 0;
}