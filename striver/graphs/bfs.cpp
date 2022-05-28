#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int v, vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(v + 1, 0);

    for (int i = 1; i <= v; i++)
    {
        // checking if the node is visited or not
        if (!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for (auto it : adj[node])
                {
                    // checking if the node is visited or not
                    if (!vis[it])
                    {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }

    return bfs;
}

int main()
{

    return 0;
}



/*

Pseudocode :

BFS (G, s)                   //Where G is the graph and s is the source node
      let Q be queue.
      Q.enqueue( s ) //Inserting s in queue until all its neighbour vertices are marked.

      mark s as visited.
      while ( Q is not empty)
           //Removing that vertex from queue,whose neighbour will be visited now
           v  =  Q.dequeue( )

          //processing all the neighbours of v
          for all neighbours w of v in Graph G
               if w is not visited
                        Q.enqueue( w )             //Stores w in Q to further visit its neighbour
                        mark w as visited.


*/