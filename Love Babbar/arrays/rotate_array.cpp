#include <iostream>
using namespace std;

void rotate(int arr[], int n, int k)
{
    int arr1[5];
    for (int i = 0; i < n; i++)
    {
        arr1[(i + k) % n] = arr[i];
    }

    arr = arr1;  // copying values of arr1 into arr

    cout<<"Your rotated array is -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 4, 5, 3, 7};
    rotate(arr, 5, 2);

    return 0;
}
// Here k is the no. of times the values are shifted
//And the values are shifted in cyclic form