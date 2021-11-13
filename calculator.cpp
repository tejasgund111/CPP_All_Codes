#include <iostream>
using namespace std;
int main()
{
    cout << "=======This is program for Calculator==========" << endl;
    int num1, num2;
    char op;
    cout << "Enter num1. : " << endl;
    cin >> num1;
    cout << "Enter num2 : " << endl;
    cin >> num2;
    cout << "Enter operator: " << endl;
    cin >> op;
    int result;
    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }
    else
    {
        cout << "you have entered invalid operator." << endl;
    }
    cout << "your result is : " << result << endl;
    return 0;
}