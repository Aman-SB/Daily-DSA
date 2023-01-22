#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T>
class graph
{
public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool direction)
    {
        // direction 0 -> undirected
        // direction 1 -> directed graph

        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto it : adj)
        {
            cout << it.first << "->";
            for (auto j : it.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{

    int n;
    cout << "Enter the number of nodes " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges " << endl;
    cin >> m;

    graph<int> g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating an undirected graph
        g.addEdge(u, v, 0);
    }

    // printing graph
    g.printAdjList();

    return 0;
}