#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *front = 0;
Node *rear = 0;

void enque(int x)
{
    Node *newnode = new Node();
    newnode->data = x;
    newnode->next = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void deque()
{
    Node *temp = front;
    if (front == 0 && rear == 0)
        cout << "Queue is empty" << endl;
    else
    {
        front = front->next;
        delete temp;
    }
}

void peek()
{
    if (front == 0 && rear == 0)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Peek element is -> " << front->data << endl;
    }
}

void display()
{
    Node *temp = front;
    if (front == 0 && rear == 0)
        cout << "Queue is empty" << endl;
    else
    {
        while (temp != 0)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    enque(5);
    enque(4);
    enque(3);
    enque(2);

    display();
    peek();
    deque();
    display();
    peek();

    return 0;
}