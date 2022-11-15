#include<bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int ,bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component){
    // ans store
    component.push_back(node);
    // marking visited
    visited[node] = true;

    // recursive call for each connectd node
    for(auto i:adj[node]){
        if(visited[i]){
            dfs(i, visited, adj, component);
        }
    }

}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges){
    // prepare adjList
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    // for disconnected components of the graph
    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int> component; // components for this particular node will be stored in this vector
            dfs(i, visited, adj, component);
        }
    }

    return ans;
}

int main(){
    
    return 0;
}

// given an undirected and diconnected graph G(V,E) 
// print the dfs traversal

// because of the undirected graph the vector<vector<int>> is used in program