#include <iostream>
using namespace std;

struct Queue
{
    int size, cap, front;
    int *arr;
    Queue(int c)
    {
        arr = new int[c];
        cap = c;
        front =0;
        size = 0;
    }
    bool isFull()
    {
        return size == cap;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void enque(int x)
    {
        if (isFull)
        {
            return;
        }
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }
    void deque()
    {
        if (isEmpty())
        {
            return;
        }
        front = (front+1)%10;
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
            return (front + size - 1) % cap;
    }
    int size()
    {
        return size;
    }
};

int main()
{

    return 0;
}