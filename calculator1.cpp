#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char ch;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << "Enter operation : ";
    cin >> ch;
    int result;

    switch (ch)
    {
    case '+':
        result = num1 + num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    }

    cout<<result<<endl;

    
    return 0;
}