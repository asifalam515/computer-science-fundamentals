#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj_list[N];
bool visited[N];
int depth[N];
int height[N];
void dfs(int parent)
{
    cout<<parent<<" ";
    visited[parent]=true;
    for(int child: adj_list[parent])
    {
        if(visited[child] ==true)continue;
        depth[child]=depth[parent]+1;
            dfs(child);
            // now we can determine the height of u
            // if(height[child]+1 >height[parent])
            // {
            //     height[parent]=height[child]+1;
            // }
            height[parent]=max(height[parent],height[child]+1);
        
    }
}
int main()
{
  int n,m;
  cin>>n>>m;
//   input nibo
for(int i=1;i<=m;i++)
{
    int u,v;
    cin>>u>>v;
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}
dfs(1);
for(int i=1;i<=n;i++)
{
    cout<<"Height  of "<<i<<" is :"<<height[i]<<endl;
}

    return 0;
}