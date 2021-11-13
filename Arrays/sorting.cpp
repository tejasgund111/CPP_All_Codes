#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[6] = {5, 1, 2, 3, 6, 8};
    sort(arr, arr + 6);
    // sort(array_name , array_name + size);   this is used for sorting an array
    cout << "Sorted array is " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}