// directed acylic graph
#include<iostream>
#include<list>
#include<unordered_map>
#include<stack>
#include<limits.h>
#include<vector>
using namespace std;
class graph{
    public:
    unordered_map<int,list<pair<int,int>>> adj;
    void add(int u,int v,int weight)
    {
        adj[u].push_back({v,weight});
    }

    // void print()
    // {
    //     for(auto it:adj)
    //     {
    //         cout<<it.first<<"->";
    //         for(auto j:it.second)
    //         {
    //             cout<<"("<<j.first<<","<<j.second<<")";
    //         }
    //         cout<<endl;
    //     }
    // }

    void topological(int node,stack<int> &st,unordered_map<int,bool> &visited)
    {
        visited[node]=true;

        for(auto it:adj[node])
        {
            if(!visited[it.first])
            {
                topological(it.first,st,visited);
            }
        }
        st.push(node);
    }

    void findthepath(vector<int> &dist,stack<int> st)
    {
        while(!st.empty())
        {
            int top = st.top();
            st.pop();

            if(dist[top] != INT_MAX)
            {
                for(auto i:adj[top])
                {
                    if(dist[top] + i.second  < dist[i.first])
                    {
                        dist[i.first]=dist[top]+i.second;
                    }
                }
            }
        }
    }

};
int main(){
    graph g;
    // add all edges to graph

    g.add(1, 3, 6);
    g.add(1, 2, 2);
    g.add(0, 1, 5);
    g.add(0, 2, 3);
    g.add(3, 4, -1);
    g.add(2, 4, 4);
    g.add(2, 5, 2);
    g.add(2, 3, 7);
    g.add(4, 5, -2);

    // g.print();

    // topological sort

    stack<int> st;
    unordered_map<int,bool> visited;
    int n=6;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            g.topological(i,st,visited);
        }
    }

    // shortest path
    int src=1;
    vector<int> dist(n,INT_MAX);
    dist[src]=0;
    g.findthepath(dist,st);

    // printing the distance
    cout<<"the answer is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}
// output -
the answer is :
// 2147483647 0 2 6 5 3