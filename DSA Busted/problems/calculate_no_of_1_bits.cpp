#include <iostream>
using namespace std;
int count(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{
    cout << "Enter your no. -> ";
    int n;
    cin >> n;
    cout << count(n) << endl;
    return 0;
}

// This program will calculate the no. of 1 bits in your entered no.