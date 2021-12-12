#include <iostream>
using namespace std;

int exp(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = 2 * exp(n - 1);
    return ans;
}
int main()
{
    int n;
    cout << "Enter your input-> ";
    cin >> n;

    cout << "Your answer is " << 2 << "^" << n << " = " << exp(n) << endl;
    return 0;
}