#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];

    // taking rowwise input
    cout << "Enter your elements -> " << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // taking columnwise input
    // for (int col = 0; col < 3; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin >> arr[row][col];
    //     }
}

// giving output
for (int row = 0; row < 3; row++)
{
    for (int col = 0; col < 3; col++)
    {
        cout << arr[row][col] << "  ";
    }
    cout << endl;
}

return 0;
}