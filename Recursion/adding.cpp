#include <iostream>
using namespace std;
int addNumber(int n)
{
    if (n == 0) // base case
    {
        return 0;
    }
    else
    {
        return n + addNumber(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter your input -> ";
    cin >> n;
    cout << "The sum of numbers from 1 to " << n << " is : " << addNumber(n);
    return 0;
}
// This is recursive adding
