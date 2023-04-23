/*  Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order. 

Note: The flattened list will be printed using the bottom pointer instead of the next pointer.
For more clarity have a look at the printList() function in the driver code

Example 1:

Input:
5 -> 10 -> 19 -> 28
|     |     |     | 
7     20    22   35
|           |     | 
8          50    40
|                 | 
30               45
Output:  5-> 7-> 8- > 10 -> 19-> 20->
22-> 28-> 30-> 35-> 40-> 45-> 50.
Explanation:
The resultant linked lists has every 
node in a single level.
(Note: | represents the bottom pointer.) */

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

Node *merge(Node *head, Node *right)
{
    if (head == NULL)
        return right;
    if (right == NULL)
        return head;

    Node *temp = new Node(-1);
    Node *cur = temp;

    while (head != NULL && right != NULL)
    {
        if (head->data < right->data)
        {
            cur->bottom = head;
            head = head->bottom;
        }
        else
        {
            cur->bottom = right;
            right = right->bottom;
        }

        cur = cur->bottom;
    }

    while (head != NULL)
    {
        cur->bottom = head;
        cur = cur->bottom;
        head = head->bottom;
    }

    while (right != NULL)
    {
        cur->bottom = right;
        cur = cur->bottom;
        right = right->bottom;
    }

    return temp->bottom;
}

Node *flatten(Node *root)
{
    if (root == NULL)
        return root;

    Node *head = root;
    Node *right = head->next;
    head->next = NULL;

    right = flatten(right);
    head = merge(head, right);

    return head;
}

int main()
{

    return 0;
}