// articulation point
#include <bits/stdc++.h>
using namespace std;
void dfs(int node, int parent, int timer, vector<int> &low, vector<int> &disc, unordered_map<int, bool> &vis, vector<int> &ap, unordered_map<int, list<int>> &adj)
{
    vis[node] = 1;
    disc[node] = low[node] = timer++;
    int child = 0;
    for (auto nbr : adj[node])
    {
        if (nbr == parent)
            continue;
        if (!vis[nbr])
        {
            // dfs
            dfs(nbr, node, timer, low, disc, vis, ap, adj);
            low[node] = min(low[node], low[nbr]);
            // check ap or not
            if (low[nbr] >= disc[node] && parent != -1)
            {
                ap[node] = 1;
            }
            child++;
        }
        else
        {
            // backedge
            low[node] = min(low[node], disc[nbr]);
        }
    }
    if (parent == -1 && child > 1)
    {
        ap[node] = 1;
    }
}
int main()
{
    int n = 5;
    int e = 5;
    vector<pair<int, int>> edges;
    edges.push_back({0, 3});
    edges.push_back({3, 4});
    edges.push_back({0, 4});
    edges.push_back({0, 1});
    edges.push_back({1, 2});

    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> low(n, -1);
    vector<int> disc(n, -1);
    unordered_map<int, bool> vis;
    int timer = 0;
    vector<int> ap(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, -1, timer, low, disc, vis, ap, adj);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (ap[i] != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
// output -
// 0 1