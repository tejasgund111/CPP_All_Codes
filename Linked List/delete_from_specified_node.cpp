#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void delete_specified(Node *head)
{
    Node *ptr, *ptr1;
    int loc, i;
    cout << "Enter location -> ";
    cin >> loc;
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;
    }
    ptr1->next = ptr->next;
    delete ptr;
    
    cout << "Deleted " << loc << " node " << endl;
}

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *forth = NULL;

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();

    head->data = 1;      // assign data in first node
    head->next = second; // Link first node with second

    second->data = 2; // assign data to second node
    second->next = third;

    third->data = 3; // assign data to third node
    third->next = forth;

    forth->data = 4; // assign data to third node
    forth->next = NULL;

    cout << "Before deletion -> ";
    printList(head);

    delete_specified(head);
    cout << "After deletion -> ";
    printList(head);

    return 0;
}