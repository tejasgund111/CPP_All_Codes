#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{

    return 0;
}

// fibonacci series-> 0, 1, 1, 2, 3, 5, 8, 13...