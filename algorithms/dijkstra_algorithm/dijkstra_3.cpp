#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
const long long int INF=1e18;
vector<pair<int,int>>adj_list[N];
long long int d[N];
bool visited[N];
int n,m;

void dijkstras(int src) {
    for(int i=1;i<=n;i++) {
        d[i]=INF;
        // visited[i] = false; // Initialize visited array
    }
    d[src]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({d[src],src});
    while(!pq.empty()) {
        auto f=pq.top();
        pq.pop();
        int selectedNode=f.second;
        int cost=f.first;
        if(visited[selectedNode]) continue;
        visited[selectedNode]=true;
        for(auto childPair: adj_list[selectedNode]) {
            int childNode=childPair.second;
            int cost_weight=childPair.first;
            if(d[selectedNode]+cost_weight < d[childNode]) { // Fix: Corrected the condition
                d[childNode]=d[selectedNode]+cost_weight;
                pq.push({d[childNode],childNode});
            }
        }
    }
}

int main() {
    cin>>n>>m;
    for(int i=1;i<=m;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({w,v});
        adj_list[v].push_back({w,u});
    }
    int src=1;
    dijkstras(src);
    for(int i=1;i<=n;i++) {
        cout<<"Shortest Distance of "<<i<<" is: ";
        cout<<d[i]<<endl;
    }
    return 0;
}
