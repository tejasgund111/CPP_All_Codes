#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {

        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / (gcd(a, b));
}
// int gcd(int a, int b)
// {
//     while (a > 0 && b > 0)
//     {
//         if (a > b)
//             a = a % b;
//         else
//             b = b % a;
//     }
//     if (a == 0)
//         return b;
//     return a;
// }


int main()
{
    /*
        int a, b;
        cout << "Enter the Values of a and b" << endl;
        cin >> a >> b;

        int ans = gcd(a, b);

        cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;
    */

    int a = 5, b = 10;
    cout << "gcd is -> " << gcd(a, b) << endl;
    cout << "lcm is -> " << lcm(a, b) << endl;

    return 0;
}
// This is done using Euclid's algorithm