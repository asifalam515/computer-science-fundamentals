#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int parent[N];
int parentSize[N];

void dsu_set(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = -1; 
        parentSize[i] = 1; 
    }
}

int dsu_find(int node) {
    while (parent[node] != -1) {
        node = parent[node];
    }
    return node;
}

bool dsu_union(int a, int b) {
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if (leaderA == leaderB) {
        // Adding this edge would create a cycle
        return true;
    }

    // Union by size to optimize tree height
    if (parentSize[leaderA] < parentSize[leaderB]) {
        parent[leaderA] = leaderB;
        parentSize[leaderB] += parentSize[leaderA];
    } else {
        parent[leaderB] = leaderA;
        parentSize[leaderA] += parentSize[leaderB];
    }

    return false;
}

int main() {
    int n, e;
    cin >> n >> e;
    dsu_set(n);

    int ans = 0;

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;

        if (dsu_union(a, b)) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
