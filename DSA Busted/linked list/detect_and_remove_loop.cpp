// the question can be asked in the following forms:
// detect cycle in LL
// remove cycle in LL

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

bool detectLoop(Node *head)
{
    if (head == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = head;
    while(temp != NULL){
        // cycle is present
        if(visited[temp] == true)
            return true;

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

int main()
{

    return 0;
}