#include<bits/stdc++.h>
using namespace std;
const int N=1e5+4;
class Edge
{
    public:
    int u;
    int v;
    int w;
    Edge(int u,int v,int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }

};
int main()
{
  int n,m;
  cin>>n>>m;
  vector<Edge>v;
while(m--)
{
    int a,b,w;
    cin>>a>>b>>w;
    Edge ed(a,b,w);
    v.push_back(ed);


}
int dis[n+1];
// sobgula node ae distance infinity set kore dilam
for(int i=1;i<=n;i++)
{
    dis[i]=INT_MAX;
}
// source er node ae distance 0 set kore dilam
dis[1]=0;

for(int i=0;i<n-1;i++)
{
    for(int j=0;j<v.size();j++)
    {
        Edge ed=v[j]; //edge peye gelam.edge take relaxx koro
        int a=ed.u;
        int b=ed.v;
        int w=ed.w;
        if(dis[a]+w < dis[b])
        {
         
            dis[b]=dis[a]+w;
        }
    }
}

bool cycle=false;
// arekbar relax kore check korbo je update hoy kina.update holei bujte hbe cycle ase.

for(int j=0;j<v.size();j++)
    {
        Edge ed=v[j]; //edge peye gelam.edge take relaxx koro
        int a=ed.u;
        int b=ed.v;
        int w=ed.w;
        if(dis[a]+w < dis[b])
        {
            cycle=true;
            break;
         
            dis[b]=dis[a]+w;
        }
    }
if(cycle)
{
    cout<<"cycle exist";
}
else
{
    for(int i=1;i<=n;i++)
{
    cout<<"Node "<<i<<" distance "<<dis[i]<<endl;
}
}
    return 0;
}