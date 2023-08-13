#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj_list[N];
int visited[N];
void dfs(int parent)
{
visited[parent]=true;
for(int child:adj_list[parent])
{
    if(visited[child])continue;
    dfs(child);
}
}
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int u,v;
    cin>>u>>v;
    adj_list[u].push_back(v);
  }
  int k;
  cin>>k;
dfs(k);
int count=0;
for(bool road:visited)
{
    if(road==true)
    {
        count++;
    }
}
cout<<count-1<<endl;
    return 0;
}