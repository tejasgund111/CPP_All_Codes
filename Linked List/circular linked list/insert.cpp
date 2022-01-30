#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *tail;
// In this program we are maintaining the tail pointer and not using the head pointer

void create()
{
    int choice;
    while (choice != 0)
    {
        Node *newnode = new Node();
        cout << "Enter data : ";
        cin >> (newnode->data);
        newnode->next = 0;

        if (tail == 0)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
        cout << "Enter 1 to continue and 0 to exit : ";
        cin >> choice;
    }
}

void insertAtBeg()
{
    Node *newnode = new Node();
    cout << "Enter data : ";
    cin >> (newnode->data);
    newnode->next = 0;
    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
    }
}

void insertAtEnd()
{
    Node *newnode = new Node();
    cout << "Enter data : ";
    cin >> (newnode->data);
    newnode->next = 0;
    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

int getlength(){
    Node *temp = tail->next;
    int count = 1;
    while(temp!=tail){
        temp = temp->next;
        count++;
    }
    return count;

}

void insertAtPosition()
{
    int pos, l, i = 1;
    Node *newnode = new Node();
    Node *temp;
    cout << "Enter position : ";
    cin >> pos;
    l = getlength();
    if (pos < 0 || pos > l)
    {
        cout << "Invalid position" << endl;
    }
    else if (pos == 1)
    {
        insertAtBeg();
    }
    else
    {
        cout << "Enter data : ";
        cin >> (newnode->data);
        temp = tail->next;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void display()
{
    Node *temp = tail->next;
    if (tail == 0)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        while (temp->next != tail->next)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
}

int main()
{
    int choice = 0;
    while (choice != 7)
    {
        cout << "----Menu----" << endl;
        cout << "1.Create \n2.Insert at Beginning \n3.Insert at End \n4.Insert at position \n5.Display \n6.Get length of list \n7.Exit \n";
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            insertAtBeg();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            display();
            break;
        case 6:
            cout<<getlength()<<endl;
            break;
        case 7:
            exit(0);
            break;
        }
    }

    return 0;
}