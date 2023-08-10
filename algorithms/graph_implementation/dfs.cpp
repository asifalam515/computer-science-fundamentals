#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj_list[N];
bool visited[N];
void dfs(int parent)
{
cout<<parent<<" ";
visited[parent]=true;
for(int value:adj_list[parent]){
    if(visited[value]==true)continue;
    else{
        dfs(value);
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
  dfs(1);

    return 0;
}