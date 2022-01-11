#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == N - 1)
    {
        cout << "Overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear = rear + 1;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Underflow" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << "Deleted element is " << queue[front] << endl;
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Peek element is " << queue[front] << endl;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << endl;
        for (int i = front; i < rear + 1; i++)
        {
            cout << queue[i] << endl;
        }
        cout << endl;
    }
}

int main()
{
    enqueue(4);
    enqueue(8);
    enqueue(6);
    enqueue(2);
    enqueue(3);

    display();
    peek();
    dequeue();
    display();
    peek();

    return 0;
}