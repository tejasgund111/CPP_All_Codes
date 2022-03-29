#include <iostream>
using namespace std;
void removeZero(int arr[], int n)
{
    int non_zero = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[non_zero]);
            non_zero++;
        }
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {0, 1, 0, 2, 0, 5};

    removeZero(arr, 6);
    display(arr, 6);

    return 0;
}

// Here in this program we are swapping the non-zero values to the left
//we are swapping the noz zero values and then incrementing the non-zero index value as non_zero++