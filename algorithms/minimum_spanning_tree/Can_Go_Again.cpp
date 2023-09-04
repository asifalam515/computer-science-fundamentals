#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 4;
const long long int INF = 1e18;

class Edge {
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<Edge> v;
    while (m--) {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }

    int dis[n + 1];
    for (int i = 1; i <= n; i++) {
        dis[i] = INT_MAX;
    }

    int source;
    cin >> source;

    dis[source] = 0;

    // Run Bellman-Ford algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < v.size(); j++) {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if (dis[a] != INT_MAX && dis[a] + w < dis[b]) {
                dis[b] = dis[a] + w;
            }
        }
    }

    // Check for negative weight cycle
    bool cycle = false;
    for (int j = 0; j < v.size(); j++) {
        Edge ed = v[j];
        int a = ed.u;
        int b = ed.v;
        int w = ed.w;
        if (dis[a] != INT_MAX && dis[a] + w < dis[b]) {
            cycle = true;
            break;
        }
    }

    int queries;
    cin >> queries;
    while (queries--) {
        int destination;
        cin >> destination;
        if (cycle || dis[destination] == INT_MAX) {
            cout << "Not Possible" << endl;
        } else {
            cout << dis[destination] << endl;
        }
    }

    return 0;
}
