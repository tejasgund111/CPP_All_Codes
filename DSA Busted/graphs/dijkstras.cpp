#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstras(vector<vector<int>> &vect, int vertices, int edges, int source)
{
    // create adjancency list
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < edges; i++)
    {
        int u = vect[i][0];
        int v = vect[i][1];
        int w = vect[i][2]; // this is the weight of the edges

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    // creation of distance array with infinite value initially
    vector<int> dist(vertices);
    for (int i = 0; i < vertices; i++)
    {
        dist[i] = INT_MAX; // giving the value to the distance or weight of the edges
    }

    // creation of set on basis (distance, node)
    set<pair<int, int>> st;
    
    // initialise set with distance and source node
    dist[source] = 0;
    st.insert(make_pair(0, source));

    while (!st.empty())
    {
        // fetch top record
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int topNode = top.second;

        // remove top record
        st.erase(st.begin());

        // traverse on neighbours
        for (auto neighbour : adj[topNode])
        {
            if (nodeDistance + neighbour.second < dist[neighbour.first])
            {
                auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
                // if record found, then erase it
                if (record != st.end())
                {
                    st.erase(record);
                }

                // distance update
                dist[neighbour.first] = nodeDistance + neighbour.second;
                // push record in the set
                st.insert(make_pair(dist[neighbour.first], neighbour.first));
            }
        }
    }

    return dist;
}

int main()
{

    return 0;
}