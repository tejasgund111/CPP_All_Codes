// que. longest common span with same sum in two binary subarrays
#include <bits/stdc++.h>
using namespace std;

int maxCommon(bool arr1[], bool arr2[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = i; j < n; j++)
        {
            sum1 += arr1[j];
            sum2 += arr2[j];

            if (sum1 == sum2)
                res = max(res, j - i + 1);
        }
    }
    return res;
}

int main()
{
    bool arr1[6] = {0, 1, 0, 0, 0, 0};
    bool arr2[6] = {1, 0, 1, 0, 0, 1};

    cout << maxCommon(arr1, arr2, 6) << endl;

    return 0;
}
