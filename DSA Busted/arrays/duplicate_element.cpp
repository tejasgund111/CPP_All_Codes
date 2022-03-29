#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 6, 8, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
                cout << arr[j];
        }
    }
    return 0;
}