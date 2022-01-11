#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue()
{
    int x;
    cout << "Enter element -> ";
    cin >> x;
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << "Deleted element is -> " << queue[front] << endl;
        front = (front + 1) % N;
    }
}

void peek()
{
    cout << "Peek element is -> " << queue[front] << endl;
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        while (i != rear)
        {
            cout << queue[i] << " ";
            i = (i + 1) % N;
        }
        cout << queue[rear] << endl;
    }
}

int main()
{
    int choice;
    while (choice != 5)
    {
        printf("\n*************************Main Menu*****************************\n");
        printf("\n=================================================================\n");
        printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Peek element\n5.Exit\n");
        printf("\nEnter your choice ?");
        cin >> choice;

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
            break;
        }
    }

    return 0;
}
