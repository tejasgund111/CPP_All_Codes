#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    // sorted array...
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int n = 5;
    int arr[n] = {5, 2, 6, 7, 3};
    selectionSort(arr, n);

    return 0;
}