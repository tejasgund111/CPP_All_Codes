#include <bits/stdc++.h>
using namespace std;

int findLength(int arr[], int n)
{
    sort(arr, arr + n);
    int res = 1, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
            curr++;
        else
        {
            res = max(res, curr);
            curr = 1;
        }
    }
    res = max(res, curr); // for handling the case if all the elements in the array are consecutive
    return res;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 9, 10, 13};
    cout << findLength(arr, 7) << endl;
    
    return 0;
}