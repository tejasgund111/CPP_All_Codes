#include <iostream>
using namespace std;
int addNumber(int n)
{
    if (n == 0)  //base case
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
    cout << addNumber(5);
    return 0;
}
//This is recursive adding 
