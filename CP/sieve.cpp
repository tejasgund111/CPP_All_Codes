#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                isPrime[j] = false; // it will mark the multiples of i as false
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " "; // it will print whatever the entries are true in the array means the index of the true values
        }
    }
}

int main()
{
    sieve(16);

    return 0;
}