#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, const vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}

int main() {
    int N, E;
    cin >> N >> E;

    vector<vector<int>> graph(N);
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v); // One-way connection from u to v
    }

    int K;
    cin >> K;

    vector<bool> visited(N, false);
    dfs(K, graph, visited);

    int reachableCount = 0;
    for (bool isReachable : visited) {
        if (isReachable) {
            reachableCount++;
        }
    }

    cout << reachableCount - 1 << endl; // Subtracting 1 to exclude Kamal's own house
    return 0;
}
