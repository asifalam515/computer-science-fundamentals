#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5; // Adjust the size accordingly

class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int parent[N];
int parenSize[N];

// Initialize the disjoint-set
void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parenSize[i] = 1;
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

void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if (leaderA != leaderB)
    {
        if (parenSize[leaderA] > parenSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parenSize[leaderA] += parenSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parenSize[leaderB] += parenSize[leaderA];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    vector<Edge> ans;

    dsu_set(n);
    long long int answer = 0;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }

    sort(v.begin(), v.end(), cmp);

    for (Edge val : v)
    {
        int a = val.a;
        int b = val.b;
        int w = val.w;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB)
            continue;

        ans.push_back(val);
        dsu_union(a, b);
        answer+= w;
    }

    set<int> parents;
    for (int i = 1; i <= n; i++)
    {
        int leader = dsu_find(i);
        parents.insert(leader);
    }

    if (parents.size() == 1)
    {
        cout << answer << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
