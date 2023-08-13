#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj_list[N];

int bfs(int source,int destination)
{
    if(source==destination)return 0;
bool visited[N]={false};
int distance[N]={0};
queue<int>q;
q.push(source);
visited[source]=true;
distance[source]=0;
while(!q.empty())
{
    int u=q.front();
    q.pop();
    for(int v:adj_list[u])
    {
        if(visited[v]==true)continue;
        visited[v]=true;
        distance[v]=distance[u]+1;
        q.push(v);
        if(v==destination)
        {
            return distance[v];
        }
    }
}
return -1;
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
  int query;
  cin>>query;
  while(query--)
  {
    int s,d;
    cin>>s>>d;
    int ans=bfs(s,d);
    cout<<ans<<endl;
  }

    return 0;
}