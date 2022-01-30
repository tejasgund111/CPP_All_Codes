
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
};
Node *head = 0;

void create()
{
    Node *temp;
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
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }

        cout << " Press 1 to continue 0 to Exit " << endl;
        cin >> val;
    }
}
void delFromPos()
{
    int pos;
    Node *temp = head;
    cout << "Enter position : ";
    cin >> pos;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
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
    display();
    delFromPos();
    display();
    return 0;
}