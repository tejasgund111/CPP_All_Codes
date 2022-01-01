#include <iostream>
#include <array>
using namespace std;

bool check(int nums[], int n)
{
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }

    // for checking the first and last element
    if (nums[n - 1] > nums[0])
        count++;

    // count<=1 this is for if all the elements in the array are same
    return count <= 1;
}

int main()
{
    int arr[5] = {3, 4, 5, 1, 2};
    cout << check(arr, 5);

    return 0;
}

// The program will return 1 if the array is sorted and rotated otherwise return 0