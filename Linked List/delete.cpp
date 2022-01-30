#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;

void deleteBeg()
{
    Node *temp = head;
    head = head->next;
    delete temp;
    cout << "Deleted node..." << endl;
}

void deleteEnd()
{
    Node *temp = head;
    Node *prev;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == head)
        head = NULL;
    else
        prev->next = NULL;
    delete temp;
    cout << "Deleted node...";
}

void deleteFromPos()
{
    int pos;
    cout << "Enter position : ";
    cin >> pos;
    Node *temp, *prev;
    temp = head;
    for (int i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
    cout << "Deleted node..." << endl;
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
        cout << "1.Delete from Beginning \n2.Delete from End \n3.Delete from position \n4.Display \n5.Exit\n";
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            deleteBeg();
            break;
        case 2:
            deleteEnd();
            break;
        case 3:
            deleteFromPos();
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