#include <iostream>
#include <vector>
using namespace std;

void wavePrint(vector<vector<int>> &arr, int nRows, int mCols)
{
    for (int col = 0; col < mCols; col++)
    {
        if (col & 1)
        {
            // odd Index -> Bottom to top
            for (int row = nRows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for (int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    wavePrint(vect, 3, 3);

    return 0;
}

// vector<vector<int>> arr
// This is nothing just like our 2d array....you can replace it by your array
