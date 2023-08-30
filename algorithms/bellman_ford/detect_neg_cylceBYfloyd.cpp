#include<bits/stdc++.h>
using namespace std;
const int INF = 1e7;

int main() {
    int n, e;
    cin >> n >> e; // Read the number of nodes (n) and edges (e) from input.

    int dis[n+1][n+1];
    // Initialize the distance matrix with initial values.
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            dis[i][j] = INF; // Initialize distances to infinity.
            if(i == j) {
                dis[i][j] = 0; // Set distance to itself as 0.
            }
        }
    }

    // Input the edges and their weights.
    while(e--) {
        int a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = w; // Update distance for the edge between nodes 'a' and 'b'.
    }

    // Floyd-Warshall algorithm to find shortest paths between all pairs of nodes.
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(dis[i][k] + dis[k][j] < dis[i][j]) {
                    // If the path through node 'k' is shorter, update the distance.
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }

    // Output the computed distances between all pairs of nodes.
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(dis[i][j] == INF) {
                cout << "INF" << " ";
            } else {
                cout << dis[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
