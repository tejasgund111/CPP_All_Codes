#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertAtIndex(Node *head, int item)
{
    Node *ptr = new Node();
    int i, loc;
    if (ptr == NULL)
    {
        cout<<"\nOVERFLOW";
    }
    else
    {

        cout << "Enter the location ->";
        cin >> loc;
        ptr->data = item;
        Node *temp = head;
        for (i = 1; i < loc; i++)
        {
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = ptr;
        cout<<"Node inserted"<<endl;
    }
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

    int value, loc;

    cout << "Enter the value -> ";
    cin >> value;

    cout << "Before insertion -> ";
    printList(head);

    insertAtIndex(head, value);
    cout << "After insertion -> ";
    printList(head);

    return 0;
}
