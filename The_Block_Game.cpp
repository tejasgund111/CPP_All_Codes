#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int rev = 0;
        cin >> n;
        int orig = n;
        while (n > 0)
        {
            rev = 10 * rev + n % 10;
            n /= 10;
        }
        if (rev == orig)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }
    return 0;
}