#include <iostream>
using namespace std;
#define N 10
int main()
{
    int arr[N];
    int size, val, position;
    cout << "Enter size of your array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Your array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Which position you want to delete : ";
    cin >> position;

    if (position <= 0 || position > size)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        // starting the loop from the index which you want to delete
        cout << "The deleted value is " << arr[position - 1] << " which is at indedx " << position - 1 << endl;
        for (int i = position - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    cout << "Your modified array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// this algorithm is for sorted arrays
// if the array is unsorted then we can swap that index value with the end value and then decrement the size of the array...by this way our element will be deleted but the array will not be in the sorted order