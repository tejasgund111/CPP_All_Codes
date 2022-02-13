#include <bits/stdc++.h>
using namespace std;

// naive solution
void printNbyK(int arr[], int n, int k)
{
    int count = 1;
    int i = 1;
    sort(arr, arr + n);
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            count++;
            i++;
        }
        if (count > (n / k))
        {
            cout << arr[i - 1] << " ";
        }
        count = 1;
        i++;
    }
}

void PrintNbyK(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto e : m)
    {
        if (e.second > n / k)
            cout << e.first << " ";
    }
}

int main()
{
    int arr[] = {10, 10, 20, 30, 20, 10, 10};
    int n = 7, k = 2;
    printNbyK(arr, n, k);
    cout << endl
         << "after using unordered map -> " << endl;
    PrintNbyK(arr, n, k);
    return 0;
}

// the n/k occurrences will be count if the count is strictly greater than n/k