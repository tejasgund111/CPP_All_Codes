#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int x = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rotate(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// cyclically rotation of the array by one place is done in this program
// it is in the clockwise direction