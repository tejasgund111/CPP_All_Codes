#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k)
{ // element not found
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    // element found
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k); // search in right part
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k); // search in left part
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 8, 14};
    int key = 14;

    int ans = binarySearch(arr, 0, 5, key);

    if (ans)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }

    return 0;
}