#include <iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    // base case -> Already sorted
    if (n == 0 || n == 1)
    {
        return;
    }
    // 1 case ko solve kar dia -> largest element ko end me rakh dia
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // baki ka recursion dekh lega
    sortArray(arr, n - 1);

    // here n is decrementing because we have kept the largest element at the last position so we are performing the process for the remaining array
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {2, 5, 1, 3, 4};
    cout << "Before sorting-> ";
    printArray(arr, 5);

    sortArray(arr, 5);
    cout << "After sorting-> ";
    printArray(arr, 5);

    return 0;
}