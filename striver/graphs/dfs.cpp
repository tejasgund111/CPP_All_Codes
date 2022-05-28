#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs)
{
    storeDfs.push_back(node);
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj, storeDfs);
        }
    }
}

vector<int> dfsOfGraph(int v, vector<int> adj[])
{
    vector<int> storeDfs;  // for storing the dfs traversal
    vector<int> vis(v + 1, 0);  // for checking the nodes are visited or not here we make the visited array and initially the values are 0
    for (int i = 1; i <= 1; i++)
    {
        if (!vis[i])
        {
            // for checking if the node is unvisited then only we will call the dfs 
            dfs(i, vis, adj, storeDfs);
        }
    }

    return storeDfs;
}

int main()
{

    return 0;
}