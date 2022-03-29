#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[7] = {1, 6, 4, 9, 7, 5, 3};
    cout << "Enter the key to search : ";
    int key;
    cin >> key;

    bool found = search(arr, 7, key);

    if (found)
    {
        cout << "Key is present " << endl;
    }
    else
    {
        cout << "Key is absent " << endl;
    }

    return 0;
}