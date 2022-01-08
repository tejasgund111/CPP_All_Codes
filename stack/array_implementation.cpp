#include <iostream>
using namespace std;

int stack[100], i, j, choice = 0, n, top = -1;
void push();
void pop();
void show();
int peek();

int main()
{

    cout << "Enter the number of elements in the stack " << endl;
    cin >> n;
    cout << "*********Stack operations using array*********" << endl;

    cout << "\n----------------------------------------------" << endl;
    while (choice != 5)
    {
        cout << "Chose one from the below options..." << endl;
        cout << "\n1.Push\n2.Pop\n3.Show\n4.Peek\n5.Exit" << endl;
        cout << "\n Enter your choice " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            cout<<peek()<<endl;
            break;
        }
        case 5:
        {
            cout << "Exiting...." << endl;
            break;
        }
        default:
        {
            cout << "Please Enter valid choice " << endl;
        }
        };
    }
}

void push()
{
    int val;
    if (top == n)
        cout << " Overflow" << endl;
    else
    {
        cout << "Enter the value?" << endl;
        cin >> val;
        top = top + 1;
        stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
        cout << "Underflow" << endl;
    else
        top = top - 1;
}
void show()
{
    for (i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
}
int peek(){
    return stack[top];
}