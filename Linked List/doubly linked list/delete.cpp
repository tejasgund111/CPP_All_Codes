#include <iostream>
using namespace std;

//here in this program we maintained a tail pointer for our simplicity which is pointing to the last node

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

void delFromBeg()
{
    Node *temp = head;
    if (head == 0)
    {
        cout << "List is empty" << endl;
    }
    if (head == tail)
    {
        head = tail = 0;
    }
    else
    {
        head = head->next;
        head->prev = 0;
        delete temp;
    }
}

void delFromEnd()
{
    Node *temp = tail;
    if (tail == 0)
    {
        cout << "List is empty" << endl;
    }
    if (head == tail)
    {
        head = tail = 0;
    }
    else
    {
        // tail->prev->next = 0;
        tail = tail->prev;
        tail->next = 0;
        delete temp;
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
    if (pos == 1)
    {
        delFromBeg();
    }
    else if(temp == tail)
    {
        tail = tail->prev;
        tail->next = 0;
        delete temp;
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
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
    int choice = 0;
    while (choice != 6)
    {
        cout << "----Menu----" << endl;
        cout << "1.Create List \n2.Delete from beginning \n3.Delete from end \n4.Delete from position \n5.Display \n6.Exit\n";
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            delFromBeg();
            break;
        case 3:
            delFromEnd();
            break;
        case 4:
            delFromPos();
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