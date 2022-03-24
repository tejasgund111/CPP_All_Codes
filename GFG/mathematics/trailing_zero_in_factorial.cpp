#include <bits/stdc++.h>
using namespace std;
// naive solution
int countZero(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    int res = 0;
    while (fact % 10 == 0)
    {
        res++;
        fact = fact / 10;
    }

    return res;
}

//optimized solution
int CountZero(int n){
    
}
int main()
{
    cout << countZero(10) << endl;
    return 0;
}

// this program will return the count of the zeroes in the factorial of n