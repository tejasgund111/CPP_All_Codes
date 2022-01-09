#include <iostream>
using namespace std;

#define N 5
int stack[N];
int top = -1;

void push()
{
    int x;
    cout << "Enter item -> ";
    cin >> x;
    if (top == N - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        int item = stack[top];
        top--;
        cout << "Popped item is " << item << endl;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top element is " << stack[top] << endl;
    }
}

void display()
{
    cout << "Your elements in the stack are ->" << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}

int main()
{
    int n;
    while (1)
    {
        cout << "Enter choice: \n1.push \n2.pop\n3.peek\n4.display\n5.exit\n";
        cin >> n;
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        }
    }

    return 0;
}