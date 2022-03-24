#include <iostream>
using namespace std;

struct Queue
{
    int size, cap;
    int *arr;
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull()
    {
        return (size == cap);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    void enque(int x)
    {
        if (isFull)
        {
            return;
        }
        arr[size] = x;
        size++;
    }
    void deque()
    {
        if (isEmpty())
        {
            return;
        }
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return 0;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return size - 1;
    }
    int size()
    {
        return size;
    }

    void display()
    {
        int front = getFront();
        int rear = getRear();
        for (int i = front; i < rear + 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);

    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);

    q.display();

    return 0;
}