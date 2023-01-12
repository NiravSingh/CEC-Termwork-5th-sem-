#include <bits/stdc++.h>

using namespace std;

struct node
{
    int u, v, wt;
    node(int a, int b, int c)
    {
        u = a;
        v = b;
        wt = c;
    }
};

bool comp(node a, node b)
{
    return a.wt > b.wt;
}

int find_par(int n, vector<int> &parent)
{
    if (n == parent[n])
        return n;
    parent[n] = find_par(parent[n], parent);
    return parent[n];
}

void unionn(int u, int v, vector<int> &rank, vector<int> &parent)
{
    u = find_par(u, parent);
    v = find_par(v, parent);

    if (rank[u] > rank[v])
        parent[v] = u;
    else if (rank[v] > rank[u])
        parent[u] = v;
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}

int main()
{
    int n;
    cin >> n;
    int wt;
    vector<node> edge;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> wt;
            if (wt != 0)
            {
                edge.push_back(node(i, j, wt));
            }
        }
    }
    sort(edge.begin(), edge.end(), comp);
    vector<int> parent(n);

    for (int i = 0; i < n; i++)
        parent[i] = i;

    vector<int> rank(n, 0);
    int cost = 0;
    vector<pair<int, int>> mst;

    for (auto it : edge)
    {
        if (find_par(it.u, parent) != find_par(it.v, parent))
        {
            cost += it.wt;
            mst.push_back({it.u, it.v});
            unionn(it.u, it.v, rank, parent);
        }
    }
    cout << "Minimum Spanning Weight : " << cost << endl;
    return 0;
}
