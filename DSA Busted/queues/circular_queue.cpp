#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front, rear, size;

public:
    Queue()
    {
        size = 100001;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value)
    {
        if ((front == 0 && rear == size-1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is Full" << endl;
            return false;
        }
        else if (front == -1)
        { // first element to push
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        { // to maintain cyclic nature
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        { // single element is present
            front = rear = -1;
        }
        else if (front = size - 1)
        {
            front = 0; // to maintain cyclic nature
        }
        else
        {
            front++;
        }
        return ans;
    }
};


class MyCircularQueue {
    int *arr;
    int front, rear, size;
public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(isEmpty()) front = 0;
        rear = (rear + 1) % size;
        arr[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        if(front == rear) front = rear = -1;
        else front = (front + 1) % size;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return arr[front];
    }
    int Rear() {
        if(isEmpty()) return -1;
        return arr[rear];
    }
    bool isEmpty() {
        return front == -1;
    }
    bool isFull() {
        return ((rear + 1) % size) == front;
    }
};


int main()
{

    return 0;
}