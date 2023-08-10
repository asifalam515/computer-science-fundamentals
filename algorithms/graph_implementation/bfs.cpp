#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj_list[N];
bool visited[N];
int level[N];
void bfs(int parent)
{
    // surutei ekta queue lage.parent ta dibo
    queue<int>q;
    q.push(parent);//q te rakha mane se visited
    visited[parent]=true;
    level[parent]=0;
// q theke ber korbo.then tar neighbour gulake add kore dibo
// jooto somoy q khali hbe na
while(!q.empty())
{
// pop a node from the queue and insert 
// unvisited neighbours of that node
int parent=q.front();
q.pop();
cout<<"visiting node: "<<parent<<endl;
// section 1:A node is being processed
for(int child:adj_list[parent])
{
    // section 2:Child processing
    if(visited[child]==true)continue;
    q.push(child);
    // visited na hole queue te rakbo.then visited true kore dibo
    visited[child]=true;
    level[child]=level[parent]+1;
    // section 3:Child processiong
}
// section 4:same as section 1

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
    cout<<"Level of "<<i<<" : "<<level[i]<<endl;
}
    return 0;
}