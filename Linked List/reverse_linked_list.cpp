#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head;

void reverse()
{
    Node *prevnode, *currentnode, *nextnode;
    prevnode = NULL; // firstly it is pointing to NULL
    currentnode = nextnode = head;

    while (nextnode != 0)
    {
        nextnode = nextnode->next;    // moving to the next node
        currentnode->next = prevnode; // updating the previous node's value and breaking the link
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}

void display()
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    cout << "Enter count of nodes -> ";
    int n;
    cin >> n;

    head = new Node();
    cin >> (head->data);
    head->next = NULL;

    Node *p = head;
    for (int i = 1; i < n; i++)
    {
        p->next = new Node();
        p = p->next;
        cin >> (p->data);
    }
    cout<<"Before reversing : ";
    display();
    reverse();
    cout<<"After reversing : ";
    display();

    return 0;
}