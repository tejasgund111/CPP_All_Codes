#include <iostream>
using namespace std;

// naive solution
int longestSubarr(bool arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int c0 = 0, c1 = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 0)
            {
                c0++;
            }
            else
            {
                c1++;
            }
            if (c0 == c1)
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}

// optimized solution


int main()
{
    bool arr[7] = {1, 0, 1, 1, 1, 0, 0};
    cout << longestSubarr(arr, 7) << endl;
    return 0;
}

// i/p : arr[] = {1,0,1,1,1,0,0}
// o/p : 6

// i/p : arr[] = {1,1,1,1}
// o/p : 0

// i/p : arr[] = {0,0,1,1,1,1,1,0}
// o/p : 4

// output format is like having the contiguous array having the same no.of 0 and 1 , we have to return its length
