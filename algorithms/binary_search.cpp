#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (key == arr[mid])
        {
            return 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the key-> ";
    cin >> key;
    int final = binarySearch(arr, 5, key);

    if (final)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }

    return 0;
}