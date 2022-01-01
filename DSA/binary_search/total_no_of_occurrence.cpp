#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int even[6] = {1, 2, 3, 3, 3, 3};

    int first = firstOcc(even, 6, 3);
    int last = lastOcc(even, 6, 3);
    int total = (last - first) + 1;

    cout << " First occurrence of 3 is at index " << first << endl;
    cout << " Last occurrence of 3 is at index " << last << endl;
    cout << " Total no. of occurrences are " << total << endl;

    return 0;
}

// for this program we are using the concept of binary search

//  This program returns gives the values of index at which the key value is present at start and at the end
// When the key will not find any match then the program will give the output -1