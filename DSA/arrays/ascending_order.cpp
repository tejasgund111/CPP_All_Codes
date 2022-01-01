#include <iostream>
using namespace std;

int main()
{
    // Initialize array
    int arr[] = {5, 2, 8, 7, 1};
    int temp = 0;

    // Calculate length of array arr
    int length = sizeof(arr) / sizeof(arr[0]);

    // Displaying elements of original array
    cout << "Elements of original array: " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "  ";
    }

    // Sort the array in ascending order
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << endl;

    // Displaying elements of array after sorting
    cout << "Elements of array sorted in ascending order: " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}