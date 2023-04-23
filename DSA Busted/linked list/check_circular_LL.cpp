#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

bool isCircular(Node *head)
{
    if (head == NULL)
        return true;
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
        return true;

    return false;
}

// this is floyd's cycle detection algorithm
bool hasCycle(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }

    return false;
}

int main()
{

    return 0;
}