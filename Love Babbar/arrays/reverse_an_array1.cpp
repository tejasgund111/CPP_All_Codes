#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 7, 6, 90};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}