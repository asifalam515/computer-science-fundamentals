#include<bits/stdc++.h>
using namespace std;
int  parent[1000];
// surute sobar parent -1 set kore dibo
void dsu_set(int n)
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1;
    }
}
int dsu_find(int node)
{
    while(parent[node]!=-1)
    {
        node=parent[node];
    }
    return node;
}
void dsu_union(int a,int b)
{
    // leader
    int leaderA=dsu_find(a);
    int leaderB=dsu_find(b);
    // jodi duitar leader same tahole tara same component ae ase.so amar kono kaj nai.alada hole kaj ase
    if(leaderA != leaderB)
    {
        // let leader hole 1/A;
        parent[leaderB]=leaderA;
    }
}
int main()
{
  int n,e;
  cin>>n>>e;
    dsu_set(n);
  while(e--)
  {
    int a,b;
    cin>>a>>b;
    // a,b ke connet koro 
    dsu_union(a,b);
  }
// set(7);
    return 0;
}