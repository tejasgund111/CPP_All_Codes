#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    // for adjaceney matrix

    int n, m;
    cin >> n >> m;

    // declare the adjacent matrix
    int arr[n + 1][m + 1];

    // take edges as input
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }

    */

   // representation in the form of the adjacency list
   int n , m;
   cin>>n>>m;

   vector <int> adj[n+1];

   for(int i=0;i<m;i++){
       int u, v;
       cin>>u>>v;

       adj[u].push_back(v);
       adj[v].push_back(u);
   }

    
    return 0;
}