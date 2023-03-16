#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// recursive way
void reverse(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node *reverseList(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    reverse(head, curr, prev);
    return head;
}

// recursive way
Node *reverse1(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *chotaHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;
}

// iterative way
Node *reverseLinkedList(Node *head)
{
    // Write your code here

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

int main()
{

    return 0;
}