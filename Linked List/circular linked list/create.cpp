#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = 0;

void create()
{
    int choice;
    Node *temp;
    while (choice != 0)
    {
        Node *newnode = new Node();
        cout << "Enter data : ";
        cin >> (newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        temp->next = head; // pointing the last pointer to the head pointer
        cout << "Enter 1 to continue and 0 to exit : ";
        cin >> choice;
    }
}

void display()
{
    Node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

int main()
{
    create();
    display();

    return 0;
}
// In this program we are not maintaining the tail pointer