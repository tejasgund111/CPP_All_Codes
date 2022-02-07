#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n, int sum)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if (curr_sum == sum)
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}

int maxLength(int arr[], int n, int sum)
{
}

int main()
{
    int arr[7] = {5, 8, -4, -4, 9, -2, 2};
    int sum = 0;
    cout << maxLen(arr, 7, sum) << endl;
    // cout << maxLength(arr, 7, sum) << endl;

    return 0;
}