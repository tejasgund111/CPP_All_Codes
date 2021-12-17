#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter your number -> ";
    cin >> n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << "No. of digits = "<< count << endl;
    return 0;
}