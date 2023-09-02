#include<bits/stdc++.h>
using namespace std;
int  parent[1000];
int parenSize[1000];
// surute sobar parent -1 set kore dibo
void dsu_set(int n)
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1;
        // surute proti ta node er parent er size 1
        parent[i]=1;
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
        // jar size boro se leader hobe
       if(parenSize[leaderA] > parenSize[leaderB])
       {
        // A boro so leader hobe A.b er parent hobe a
        parent[leaderB]=leaderA;
        // A leder.a er under er child er sthe B er jinis gula add hobe.tahle newsize=oldsize+b er size
        parenSize[leaderA]+=parenSize[leaderB];
       }
       else
       {
        // B boro so leader hobe B.a er parent hobe b
        parent[leaderA]=leaderB;
        parenSize[leaderB]+=parent[leaderA];
       }
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
  cout<<dsu_find(5);
// set(7);
    return 0;
}