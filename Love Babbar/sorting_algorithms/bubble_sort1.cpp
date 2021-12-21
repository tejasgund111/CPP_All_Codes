// For best case time complexity in the program for bubble sort

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        // for round n to n-1
        for (int j = 0; j < n - i; j++)
        { // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        { // already sorted
            break;
        }
    }
}
void display(int arr[], int n)
{
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
    display(arr, 6);

    return 0;
}
//optimised solution