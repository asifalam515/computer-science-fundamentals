#include<bits/stdc++.h>
using namespace std;
const long long int INF = 1e18;

int main() {
    long long int n, e;
    cin >> n >> e; 

    long long int dis[n+1][n+1];
    for(long long int i = 1; i <= n; i++) 
    {
        for(long long int j = 1; j <= n; j++) 
        {
            dis[i][j] = INF; 
            if(i == j) {
                dis[i][j] = 0; 
            }
        }
    }

    for(long long  i = 0; i < e; i++)
     {
        long long int a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = min(dis[a][b], w); 
    }

    for(long long int k = 1; k <= n; k++)
     {
        for(long long int i = 1; i <= n; i++) 
        {
            for(long long int j = 1; j <= n; j++)
             {
                if(dis[i][k] + dis[k][j] < dis[i][j]) {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }

    long long int q;
    cin >> q;
    while(q--) {
        long long int source, destination;
        cin >> source >> destination;

        if (dis[source][destination] == INF)
         {
            cout << -1 << endl;
        }
        else
         {
            cout << dis[source][destination] << endl;
        }
    }
    
    return 0;
}
