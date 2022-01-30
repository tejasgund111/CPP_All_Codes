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

void display()
{
    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

int main()
{
    create();
    display();
    return 0;
}