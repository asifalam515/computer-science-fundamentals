#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];

void dfs(int u)
{
    // section 1
    // actions just after entering a node u
    visited[u]=true;//kara visited hoyese track rakbo
    cout<<"Visiting Node: "<<u<<endl;
for(int v:adj[u]) //u theke adj[u] এর মধ্য থাকা সকল v তে যাওয়া যায়
{
    // section 2
    // actions before entering an new neighbor/child
    if(visited[v]==true)
    {
        continue;
    }
    else{
        dfs(v);
    }

// section 3
// actions after exiting a neighbour
}
// section 4
// actions before exiting a node u
}
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);//directed er jnno sudu eta korlei hobe
    adj[v].push_back(u);//undirected er jnno duitai kora lagbe

  }



dfs(1);
cout<<"Visting Array\n";
for(int i=1;i<=n;i++)
{
   cout<<"Node "<<i<<"status: "<<visited[i]<<endl;
}

    return 0;
}