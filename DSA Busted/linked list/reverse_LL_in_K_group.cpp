#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *kReverse(Node *head, int k)
{
    if (head == NULL)
        return NULL;

    // step 1: reverse first k nodes
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    int cnt = 0;

    while (curr != NULL && cnt < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    // step 2: Recursion
    if (next != NULL)
        head->next = kReverse(next, k);

    // step 3:return head of reversed list
    return prev;
}

// curr and next pointers are keeping track of the remaining linked lists which are going to be reversed

int main()
{

    return 0;
}