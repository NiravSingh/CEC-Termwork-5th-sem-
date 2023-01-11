#include <bits/stdc++.h>

using namespace std;
#define INF 1e8 + 9

void shortest_path(int i, vector<int> &distance, vector<pair<int, int>> adj[])
{
    distance[i] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, i});

    while (!pq.empty())
    {
        int y = pq.top().second;
        pq.pop();

        for (auto it : adj[y])
        {
            if (distance[y] + it.second < distance[it.first])
            {
                distance[it.first] = distance[y] + it.second;
                pq.push({distance[it.first], it.first});
            }
        }
    }
}

int main()
{
    int n, x;
    cin >> n;
    vector<pair<int, int>> adj[n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            if (x != 0)
            {
                adj[i].push_back({j, x});
            }
        }
    }
    int source;
    cin >> source;
    vector<int> distance(n + 1, INF);
    shortest_path(source, distance, adj);
    for (int i = 1; i <= n; i++)
    {
        cout << distance[i] << "  ";
    }
    return 0;
}
