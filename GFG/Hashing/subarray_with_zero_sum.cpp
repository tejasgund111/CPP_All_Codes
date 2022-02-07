#include <bits/stdc++.h>
using namespace std;

// naive solution
bool is0Subarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if (curr_sum == 0)
                return true;
        }
    }
    return false;
}
// O(n*n)  time complexity

// using prefix sum and hashing
bool is0SubArray(int arr[], int n)
{
    unordered_set<int> s;
    int preSum = 0;
    for (int i = 0; i < n; i++)
    {
        preSum += arr[i];
        if (s.find(preSum) != s.end())
        {
            return true;
        }
        if (preSum == 0)
        {
            return true;
        }
        s.insert(preSum);
    }
    return false;
}
// O(n) time complexity

int main()
{
    int arr[4] = {4, -3, 2, 1};
    cout << is0Subarray(arr, 4) << endl;
    cout << is0SubArray(arr, 4) << endl;
    return 0;
}

// the subarray is contiguous

// i/p: {1,4,13,-3,-10,5}
// o/p:yes

// i/p:{-1,4,-3,5,1}
// o/p:yes

// i/p:{3,1,-2,5,6}
// o/p:no

// i/p:{5,6,0,8}
// o/p:yes