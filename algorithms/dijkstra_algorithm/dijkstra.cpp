#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
typedef pair<int,int>pii;
vector<pii>adj_list[N];
const int INF=1e9+10;
vector<int>dist(N,INF);
vector<bool>visited(N);
void dijkstra(int source)
{
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    // surutei source take push kore dilam tar distance shoho
    dist[source]=0;
    pq.push({dist[source],source});
    while(!pq.empty())
    {
        int u=pq.top().second; //karon amr pq hote node ta dorkar
        pq.pop();
        // jaake pop koresi se visited hoye jaabe
        visited[u]=true;
        for(pii vpair:adj_list[u])
        {
            int v=vpair.first; //first er ta child node
            int w=vpair.second;//second ta weight
        // alredy visited hole taake niye kono kaj nai

    if(visited[v]==true)continue;

            // relaxation er kaj
            // kom paile seta update kore dibo
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
}
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int u,v,w;
    cin>>u>>v>>w;
    adj_list[u].push_back({v,w});
    adj_list[v].push_back({u,w});
  }
dijkstra(1);
for(int i=1;i<=n;i++)
{
    cout<<"Distance of node "<<i<<"; ";
    cout<<dist[i]<<endl;
}
    return 0;
}