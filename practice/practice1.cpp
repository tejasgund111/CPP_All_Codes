#include <iostream>
using namespace std;

int find_peak(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int ar[4] = {3, 4, 5, 1};
    cout << "Peak index in the array is : " << find_peak(ar, 4);
    return 0;
}

// This program will return the index of the peak element in the mountain array