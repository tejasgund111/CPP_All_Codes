#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    sort(arr, arr + n + 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    rearrange(arr, 9);
    return 0;
}
// in this program we will move the negative numbers to the beginning of the array and the positive numbers to the end of the array
// here the arrangement is not important