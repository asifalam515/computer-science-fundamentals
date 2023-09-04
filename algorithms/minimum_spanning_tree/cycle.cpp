#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5; // Adjust the size accordingly

class Edge
{
public:
    int a, b;
    Edge(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

int parent[N];

// Initialize the disjoint-set
void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
    }
}

int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

bool dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if (leaderA != leaderB)
    {
        parent[leaderA] = leaderB;
        return true; // Edge creates a cycle
    }
    return false; // Edge doesn't create a cycle
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;

    dsu_set(n);

    int cycleEdges = 0;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        if (dsu_union(a, b))
        {
            cycleEdges++; // If the edge creates a cycle, increment the count
        }
    }

    cout << cycleEdges << endl;

    return 0;
}
