#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5; 
vector<int> adj_list[N];
bool visited[N];
vector<vector<int>> v(N);
int cc = 0; 
vector<int> vv;

void dfs(int parent) {
    v[cc].push_back(parent); 
    visited[parent] = true;

    for (int neighbor : adj_list[parent]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    
    v.resize(N + 1);

    for (int i = 0; i < m; i++) { 
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    for (int i = 0; i < N; i++) { 
        if (!visited[i]) {
            cc++; 
            dfs(i);
        }
    }

    for (int i = 1; i <= cc; i++) {
        vv.push_back(v[i].size());
    }

    sort(vv.begin(), vv.end());

    for (int value : vv) {
        if (value > 1) {
            cout << value << " ";
        }
    }

    return 0;
}
