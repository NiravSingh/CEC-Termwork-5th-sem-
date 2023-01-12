#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"enter size :"<<endl;
    int n;
    cin >> n;
    int wt;
    vector<pair<int, int>> adj[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> wt;
            if (wt != 0)
                adj[i].push_back({j, wt});
        }
    int parent[n];
    memset(parent, -1, sizeof parent);
    vector<bool> mst(n, false);
    vector<int> key(n, INT_MAX);

    key[0] = 0;

    for (int count = 0; count < n - 1; count++)
    {
        int mini = INT_MAX, u = -1;

        for (int v = 0; v < n; v++)
        {
            if (mst[v] == false && key[v] < mini)
            {
                mini = key[v];
                u = v;
            }
        }
        mst[u] = true;

        for (auto it : adj[u])
        {
            int v = it.first;
            int weight = it.second;
            if (mst[v] == false && weight < key[v])
            {
                parent[v] = u;
                key[v] = weight;
            }
        }
    }
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        cost += key[i];
    }
    cout << "Minimum Spanning Weight : " << cost << endl;
