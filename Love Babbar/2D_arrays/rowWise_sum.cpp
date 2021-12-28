#include <iostream>
using namespace std;

// To print row wise sum
void printSum(int arr[][3], int row, int col)
{
    cout << "Printing sum -> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

int main()
{
    cout << "Enter your elements " << endl;
    int arr[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    printSum(arr, 3, 3);

    return 0;
}