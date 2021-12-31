#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAthead(node *&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    insertAthead(head, 5);
    insertAthead(head, 2);
    insertAthead(head, 8);
    insertAthead(head, 3);
    print(head);

    return 0;
}


// Approach to solve this problem
// Initially, we have given a linked list that consists of nodes. Each node contains the data and address to the next node.

// Since we have already created a node thus we will create a function that will take the address of the head node as a parameter and the data which we have to insert at the beginning of the linked list and insert the data at the beginning. Now point the head to the newly inserted node.

// A function insertAthead(node*&head, int data) takes the address of the head node and the data which we have to insert.

// Create a new node and insert the data into it.

// Move the head to the newly created node.

// Print the linked list.