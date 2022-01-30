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
    int val;
    while (val != 0)
    {
        Node *newnode = new Node();
        cout << "Enter data : ";
        cin >> (newnode->data);
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

        cout << " Press 1 to continue 0 to Exit " << endl;
        cin >> val;
    }
}

void reverse()
{
    Node *current, *nextnode;

    if (head == 0)
    {
        cout << "Can't be reversed" << endl;
    }
    else
    {
        current = head;
        while (current != 0)
        {
            nextnode = current->next;
            current->next = current->prev;
            current->prev = nextnode;
            current = nextnode;
        }
        // swapping the head and tail pointer values
        current = head;
        head = tail;
        tail = current;
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
    cout << "NULL" << endl;
}

int main()
{
    create();
    cout<<"Before reversing -> ";
    display();
    reverse();
    cout<<"After reversing -> ";
    display();
    return 0;
}