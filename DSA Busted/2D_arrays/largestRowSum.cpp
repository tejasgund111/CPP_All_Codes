#include <iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT32_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "Maxi sum is " << maxi << endl;
    return rowIndex;
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

    cout << "Max row is at index " << largestRowSum(arr, 3, 3);

    return 0;
}