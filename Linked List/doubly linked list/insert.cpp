#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
};
Node *head = 0, *tail;

void create()
{
    Node *newnode = new Node();
    cout << "Enter data : ";
    cin >> newnode->data;
    newnode->next = 0;
    newnode->prev = 0;
    if (head == 0)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insertAtBeg()
{
    Node *newnode = new Node();
    cout << "Enter data : ";
    cin >> newnode->data;
    newnode->next = 0;
    newnode->prev = 0;

    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insertAtEnd()
{
    Node *newnode = new Node();
    cout << "Enter data : ";
    cin >> newnode->data;
    newnode->next = 0;
    newnode->prev = 0;

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insertAtPosition()
{
    Node *newnode = new Node();
    int pos;
    cout << "Enter data : ";
    cin >> newnode->data;
    cout << "Enter position : ";
    cin >> pos;
    newnode->next = 0;
    newnode->prev = 0;

    if (pos < 1)
    {
        cout << "Invalid position" << endl;
    }
    else if (pos == 1)
    {
        insertAtBeg();
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

void insertAfterPosition()
{
    Node *newnode = new Node();
    int pos;
    cout << "Enter data : ";
    cin >> newnode->data;
    cout << "Enter position : ";
    cin >> pos;
    newnode->next = 0;
    newnode->prev = 0;

    if (pos < 1)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

void display()
{
    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main()
{
    create();
    int choice = 0;
    while (choice != 6)
    {
        cout << "----Menu----" << endl;
        cout << "1.Insert at Beginning \n2.Insert at End \n3.Insert at position \n4.Insert after position \n5.Display \n6.Exit\n";
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insertAtBeg();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtPosition();
            break;
        case 4:
            insertAfterPosition();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        }
    }

    return 0;
}