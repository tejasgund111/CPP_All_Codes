// detect the cycle in undirected graph using BFS traversal
#include<bits/stdc++.h>
using namespace std;

bool checkForCycle(int s, int v, vector<int>adj[], vector<int>&visited){
    // create a queue for bfs
    queue<pair<int, int>> q;

    visited[s] = true;
    q.push({s, -1});  // inserting the initial starting node with the previous as -1

    while(!q.empty()){

        // finding out the top elements of the queue
        int node = q.front().first;
        int par = q.front().second;

        for(auto it: adj[node]){
            if(!visited[it]){
                visited[it] = true;
                q.push({it, node});
            }
            else if(par != it)
                return true;
        }

    }

    return false;
}

bool isCycle(int v, vector<int> adj[]){
    vector<int> vis(v+1, 0);
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            if(checkForCycle(i,v,adj,vis))
                return false;
        }
    }

    return false;
}

int main(){
    
    return 0;
}