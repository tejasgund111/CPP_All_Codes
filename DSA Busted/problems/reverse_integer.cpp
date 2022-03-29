#include <iostream>
using namespace std;
int reverse(int n)
{
    int ans = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        if ((ans > (INT32_MAX) / 10) || (ans < (INT32_MIN) / 10))
        {
            return 0;
        }

        ans = (ans * 10) + digit;
        n = n / 10;
    }
    return ans;
}
int main()
{
    int m;
    cout << "Enter your no. ";
    cin >> m;

    cout << "Reversed no. is " << reverse(m) << endl;
    return 0;
}

//it returns 0 when it exceeds the limit 