#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter any four digit no. -> ";
    cin >> a;
    cout << "Reversed no is -> ";
    for (int i = 0; i < 4; i++)
    {
        cout << a % 10;
        a = a / 10;
    }
    return 0;
}