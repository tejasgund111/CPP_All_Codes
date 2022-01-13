#include <iostream>
using namespace std;

int digitSum(int n)
{
    if (n / 10 == 0)
    {
        return n % 10;
    }
    return n % 10 + digitSum(n / 10);
}

int main()
{
    int n;
    cout << "Enter your number -> ";
    cin >> n;
    cout << "Ans -> " << digitSum(n) << endl;

    return 0;
}