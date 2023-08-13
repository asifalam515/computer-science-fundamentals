#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj_list[N];
int visited[N];
void dfs(int u)
{
    stack<int>st;
    st.push(u);
    visited[u]=true;
    for(int v:adj_list[u])
    {
        if(visited[v]==true)continue;
        dfs(v);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}
int main()
{
int n,m;
cin>>n>>m;
// input graph
for(int i=1;i<=m;i++)
{
    int u,v;
    cin>>u>>v;
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}
// outuptu er pala
dfs(1);


    return 0;
}