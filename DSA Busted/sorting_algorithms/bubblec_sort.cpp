#include <iostream>
using namespace std;

// Algorithm ->>  Push the max to the last by adjacent swaps
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // for round n to n-1
        for (int j = 0; j < n - i; j++)
        { // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // your sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int arr[6] = {5, 2, 3, 9, 6, 4};
    cout << "Sorted array is -> " << endl;
    bubbleSort(arr, 6);
    cout << endl;

    return 0;
}