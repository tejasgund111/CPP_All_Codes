#include <iostream>
using namespace std;

// function for checking prime number or not
bool isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int countPrime(int n)
{   int count = 0;
    
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Enter your number upto which do you want to count -> ";
    int n;
    cin >> n;
                        
    cout << "Total count -> " << countPrime(n) << endl;

    return 0;
}

// Time complexity -  O(n)