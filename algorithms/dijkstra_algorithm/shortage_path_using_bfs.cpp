// complexity order(n+m)
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj_list[N];
bool visited[N];
int level[N];
int parent[N];
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    parent[s]=-1;
    
   while (!q.empty())
   {
    int u=q.front();
    q.pop();
    // cout<<parent<<endl;
    for(int child:adj_list[u])
    {
        if(visited[child]==true)continue;
        q.push(child);
        visited[child]=true;
        level[child]=level[u]+1;
        parent[child]=u;
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
// bfs(1);
int s,d;
cin>>s>>d;
bfs(s);
cout<<"Shortage Path/Distance is: "<<level[d]<<endl;
// for(int i=1;i<=n;i++)
// {
//     cout<<"Parent of "<<i<<" : "<<parent[i];
//     cout<<endl;
// }
// Path finding: O(N)
vector<int>path;
int current=d;
while(current!=-1)
{
  path.push_back(current);
  current=parent[current];
}
reverse(path.begin(),path.end());
cout<<"Path : ";
for(int node:path)
{
  cout<<node<<" ";
}

    return 0;
}