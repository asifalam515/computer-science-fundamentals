#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj_list[N];
bool visited[N];
int level[N];
void bfs(int parent)
{
queue<int>q;
q.push(parent);
level[parent]=0;
while(!q.empty())
{
    int parent=q.front();
    q.pop();
    cout<<"visiting node: "<<parent<<endl;
    // ebar parent er unique neighbour gulakew add kore dibo
    for(int child:adj_list[parent])
    {
        if(visited[child]==true)continue;
        q.push(child);
        visited[child]=true;
        level[child]=level[parent]+1;
         
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
  bfs(1);

for(int i=1;i<=n;i++)
{
    cout<<"Level of "<<i<<"is : "<<level[i]<<endl;
}
    return 0;
}