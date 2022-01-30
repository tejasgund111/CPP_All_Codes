#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;

void insertAtBeg()
{
    cout << "Enter data : ";
    Node *newnode = new Node();
    cin >> (newnode->data);
    newnode->next = head;
    head = newnode;
    cout << "Node inserted..." << endl;
}

void insertAtEnd()
{
    cout << "Enter data : ";
    Node *newnode = new Node();
    cin >> (newnode->data);
    newnode->next = NULL;

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    cout << "Node inserted..." << endl;
}

// here we are inserting the node after the given position
void insertAtPosition()
{
    cout << "Enter data : ";
    Node *newnode = new Node();
    cin >> (newnode->data);
    int pos;
    cout << "Enter position : ";
    cin >> pos;

    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    cout << "Node inserted..." << endl;
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
    display();

    int choice = 0;
    while (choice != 5)
    {
        cout << "----Menu----" << endl;
        cout << "1.Insert at Beginning \n2.Insert at End \n3.Insert after position \n4.Display \n5.Exit\n";
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
            display();
            break;
        case 5:
            exit(0);
            break;
        }
    }

    return 0;
}