#include <iostream>
using namespace std;

int main()
{
    int n, t, fact = 1;
    cin >> n;

    while (n--)
    {
        fact = 1;
        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            fact = fact * i;
        }
        cout << fact << endl;
    }
    return 0;
}