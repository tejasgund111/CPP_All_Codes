#include <bits/stdc++.h>
using namespace std;

class GraphNode
{
    int data;
    GraphNode *next;

public:
    GraphNode(int d)
    {
        data = d;
        next = NULL;
    }

    friend class Graph;
};

class Graph
{
    int vertices;
    GraphNode **graph;

public:
    Graph()
    {
        vertices = 0;
    }
    Graph(int v)
    {
        vertices = v;
        graph = new GraphNode *[vertices];
        for (int i = 0; i < vertices; i++)
        {
            graph[i] = NULL;
        }
    }

    void insert()
    {
        int a, b;
        cout << "Enter the vertices in which edge is present : " << endl;
        cin >> a >> b;
    }
    void bfs()
    {
    }
    void dfs()
    {
    }
    void display()
    {
    }
};

int main()
{

    return 0;
}