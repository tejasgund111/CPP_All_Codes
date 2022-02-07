#include <bits/stdc++.h>
using namespace std;

// naive solution
bool isSum(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if (curr_sum == sum)
            {
                return true;
            }
        }
    }
    return false;
}

// optimized solution based on prefix sum and hashing
bool isSumPresent(int arr[], int n, int sum)
{
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if (pre_sum == sum)
        {
            return true;
        }
        if (s.find(pre_sum - sum) != s.end())
        {
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}
// O(n)  time complexity

int main()
{
    int arr[6] = {5, 8, 6, 13, 3, -1};
    int sum = 22;
    cout << isSum(arr, 6, sum) << endl;
    cout << isSumPresent(arr, 6, sum) << endl;
    return 0;
}

// i/p:{5,8,6,13,3}  sum = 22
// o/p: yes

// i/p:{15,2,8,10,-5,-8,6}  sum = 3
// o/p: yes