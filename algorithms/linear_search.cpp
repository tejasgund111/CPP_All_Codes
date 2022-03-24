#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int key)
{
    for (int i = 0; i < 5; i++)
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
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the key-> ";
    cin >> key;
    int final = linearSearch(arr, key);

    if (final)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }

    return 0;
}