#include <iostream>
using namespace std;

void rotate(int arr[], int n, int ind)
{
    for (int i = ind; i < n + ind; i++)
    {
        cout << arr[i % n] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int index = 2; // from this index array is going to rotate
    rotate(arr, 6, index);
    return 0;
}