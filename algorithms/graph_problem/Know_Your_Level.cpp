
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj_list[N];
bool visited[N];
int level[N];

void bfs(int parent)
{
    queue<int>q;
    q.push(parent);
    visited[parent]=true;
    level[parent]=0;

    while(!q.empty())
    {
        int parent=q.front();
        q.pop();
        for(int child : adj_list[parent])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child]=true;
                level[child]=level[parent]+1;
            }
        }
    }
}
vector<int> ans(int n,int l)
{
    vector<int>v;
    bool found = false;
    for(int i = 1; i <= N; i++)
    {
       
        if(level[i] == l)
        {
            found = true;
            v.push_back(i);
        }
    }

    // if(!found)
    // {
    //     cout << "-1"; 
    // }
   
        return v;
    
}

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int l;
    cin >> l;
    

    bfs(0); 

   vector< int> result=ans(n,l);
   if(l==0){
    cout<<0<<endl;
   }
   else {
   if(result.size()==0){
    cout<<-1<<endl;
   }
   else
   {
     for(int value:result)
    {
        cout<<value<<" ";
    }
   }
   }

    return 0;
}
