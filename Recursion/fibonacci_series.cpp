#include <iostream>
using namespace std;
int getFib(int n)
{
    // base condition
    if (n == 0 || n == 1)
    {
        return n;
    }
    // recursive call
    return getFib(n - 1) + getFib(n - 2);
    
}

int main()
{
    int n;
    cout << "Please enter input -> ";
    cin >> n;

    cout <<"Value of "<< n <<"th fibonacci "<< getFib(n)<<endl;

    return 0;
}

// Time Complexity: T(n) = T(n-1) + T(n-2) which is exponential. 