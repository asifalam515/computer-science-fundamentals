#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int nodes,edges;
vector<pair<int,int>>adj_list[N];
const long long int INF=1e18;
long long int d[N];
bool visited[N];
void dijkstra(int src)
{

//set all the nodes distance to infinite
for(int i=1;i<=nodes;i++)
{
    
d[i]=INF;
}
// set source distance to 0;
d[src]=0;
// we will take a priority queue where will be two things weight and node
priority_queue<pair<int,int>,vector<pair<int,int>>,
greater<pair<int,int>> >pq;
// at first we will push to pq the distance and node of source
pq.push({d[src],src});
// we will do certain task until the pq is empty
while(!pq.empty())
{
    // we will take the top pair of pq
    pair<int,int>f=pq.top();
    // then we will pop from pq
    pq.pop();
    // we will select the node from the top
    int selectedNode=f.second;
    if(visited[selectedNode])continue;
    visited[selectedNode]=true;
    // we will take all the children of the selected node
    for(auto childPr:adj_list[selectedNode])
    {
        int edgeCost=childPr.first;
        int vertex=childPr.second;
        // relax
        if(d[selectedNode]+edgeCost<d[vertex])
        {
        d[vertex]=d[selectedNode]+edgeCost;
        pq.push({d[vertex],vertex});
        }

    }

}
}
int main()
{
  

cin>>nodes>>edges;
for(int i=0;i<edges;i++)
{
    int u,v,w;
    cin>>u>>v>>w;
    adj_list[u].push_back({w,v});
    adj_list[v].push_back({w,u});

}
int src=1;
dijkstra(src);
for(int i=1;i<=nodes;i++)
{
    cout<<"Shortest Distance of "<<i<<" is: ";
    cout<<d[i]<<" "<<endl;
}
    return 0;
}