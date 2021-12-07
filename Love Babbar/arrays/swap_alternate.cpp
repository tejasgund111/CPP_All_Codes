#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            // swap(arr[i], arr[i + 1]);
             // swap( ) is an inbuilt function if we are not using this then we can use the following way

            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
int main()
{
    int even[8] = {5, 6, 1, 2, 3, 7, 9, 4};
    int odd[5] = {4, 6, 2, 8, 3};

    swapAlternate(even, 8);
    printArray(even, 8);

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}