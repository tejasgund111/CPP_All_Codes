#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n, int k)
{
    int arr1[5];
    for (int i = 0; i < n; i++)
    {
        arr1[(i + k) % n] = arr[i];
    }

    arr = arr1; // copying values of arr1 into arr

    cout << "Your rotated array is -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void leftRotate(int arr[], int n, int d)
{
    d = d % n; // for checking if the d>n
    int temp[d];

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i]; // storing in temp
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i]; // shifting the array
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)]; // final placing in the array from the temp
    }
    cout << "Your rotated array is -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// optimal approach
void leftRotateOptimal(int arr[], int n, int k)
{
    // 1 2 3 4 5 6 7
    reverse(arr, arr + k); // for reversing till k ->> 3 2 1 4 5 6 7
    reverse(arr + k, arr + n); // for reversing from k to n ->> 3 2 1 7 6 5 4
    reverse(arr, arr + n); // for reversing the whole array  ->> 4 5 6 7 1 2 3
}

int main()
{
    int arr[5] = {1, 4, 5, 3, 7};
    int arr1[4] = {5, 6, 7, 8};
    rightRotate(arr1, 4, 3);
    cout << endl;
    leftRotate(arr1, 4, 3);

    return 0;
}
// Here k is the no. of times the values are shifted
// And the values are shifted in cyclic form