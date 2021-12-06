#include <iostream>
using namespace std;
int main()
{
    // Initialize array
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};

    // Calculate length of array arr
    int length = sizeof(arr) / sizeof(arr[0]);

    // Array fr will store frequencies of element
    int fr[length];
    int visited = -1;

    for (int i = 0; i < length; i++)
    {
        int count = 1;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                // To avoid counting same element again
                fr[j] = visited;
            }
        }
        if (fr[i] != visited)
            fr[i] = count;
    }

    // Displays the frequency of each element present in array
    cout << "---------------------" << endl;
    cout << " Element | Frequency" << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < length; i++)
    {
        if (fr[i] != visited)
        {
            cout << arr[i];
            cout << "   |  ";
            cout << fr[i] << endl;
        }
    }
    cout << "---------------------" << endl;
    return 0;
}