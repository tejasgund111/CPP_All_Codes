#include <bits/stdc++.h>
using namespace std;

// Return array of size v of topological sort of the directed acyclic graph having vertices v and edges e

// here we are using DFS approach for topological sorting of our problem
void topoSort(int node, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj)
{
    visited[node] = 1; // making that node as visited

    for (auto neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            topoSort(neighbour, visited, s, adj);
        }
    }

    s.push(node);
    // recursively traversing all the nodes and pushing in the stack
}

// v is no. of vertices and e is the edges
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, list<int>> adj;
    // making the adjacency list
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // call dfs topological sort util function for all components
    vector<bool> visited(v);
    stack<int> s;
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            topoSort(i, visited, s, adj);
        }
    }

    // keeping the ans in the vector from the stack
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Topological sort (using Kahn's algorithm)
// now here we are using BFS approach
vector<int> TopologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // find all indegrees
    vector<int> indegree(v);
    for (auto i : adj)
    {
        for (auto j : i.second)
        {
            indegree[j]++;
        }
    }

    // 0 indegree walo ko push kardo
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    // do BFS
    vector<int> ans;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        // ans store
        ans.push_back(front);

        // neighbour indegree update
        for (auto neighbour : adj[front])
        {
            indegree[neighbour]--;
            if (indegree[neighbour] == 0)
                q.push(neighbour);
        }
    }
    return ans;
}

int main()
{

    return 0;
}