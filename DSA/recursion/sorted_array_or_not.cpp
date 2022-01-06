#include <iostream>
using namespace std;

// bool isSorted(int *arr, int size)  we can also use like this using pointer concept
bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
    {  // checking the first two elements
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);  // it will check the remaining elements
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}