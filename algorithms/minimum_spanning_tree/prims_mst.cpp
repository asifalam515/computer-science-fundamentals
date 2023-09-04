#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;
const int N=1e5+5;
vector<pi>v[N];
bool visited[N];
class Edge
{
    public:
    int a,b,w;
    Edge(int a,int b,int w)
    {
        this->a=a;
        this->b=b;
        this->w=w;
    }
};
class cmp
{
    public:
    // kon duitar moddhe compare korba
    // ami cassi w ta soto theke boro hok
    bool operator()(Edge a,Edge b)
    {
        return a.w > b.w;
    }
};
void prims(int s)
{
    // ekta pq nibo jaate 3 ta jinis rakbo edge+weight
    // compare class ta nije baanate hobe
    priority_queue<Edge,vector<Edge>,cmp>pq;
    // sobar first  1 1 0 push korbo.source hote source ae jaabe
// edge list gula rakhar jnno ekta vector toiri korlam
vector<Edge>edgeList;
  pq.push(Edge(s,s,0));
//   amar process suru holo
// 
  while(!pq.empty())
  {
Edge parent=pq.top();
pq.pop();
int a=parent.a;
int b=parent.b;
int w=parent.w;
// jodi visited hoye jai tahole kno kaj nai tmr
if(visited[b])continue;
// b eseche to first kaj hlo taake visited kore deya
visited[b]=true;
edgeList.push_back(parent);
// ebar b er children gula lagbe
for(int i=0;i<v[b].size();i++)
{
    pi child=v[b][i];
    // children er duita part nodes and cost
    if(!visited[child.first])
    {
        pq.push(Edge(b,child.first,child.second));
    }
}
  }

  edgeList.erase(edgeList.begin());
for(Edge val:edgeList)
{
    cout<<val.a<<" "<<val.b<<" "<<val.w<<endl;
}

}
int main()
{
  int n,e;
  cin>>n>>e;
  while(e--)
  {
int a,b,w;
cin>>a>>b>>w;
v[a].push_back({b,w});
v[b].push_back({a,w});
  }
prims(1);
    return 0;
}