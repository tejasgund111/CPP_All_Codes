#include <iostream>
using namespace std;

int addDigits(int n)
{
    int sum = 0;
    if (n == 0)
        return 0;
    else{
        sum += n%10;
        n= n/10;
        return (sum + addDigits(n));
    }
}

int main()
{
    int n;
    cout << "Enter your number -> ";
    cin >> n;
    cout << "Result is -> " << addDigits(n) << endl;

    return 0;
}