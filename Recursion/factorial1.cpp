#include <iostream>
using namespace std;
int getFactorial(int n)
{
    // base condition
    if (n <= 1)
    {
        return 1;
    }

    // recursive call
    return n * getFactorial(n - 1);
}
int main()
{
    int n;
    cout << "Please enter input -> ";
    cin >> n;

    cout << "Value of " << n << "! is " << getFactorial(n);

    return 0;
}