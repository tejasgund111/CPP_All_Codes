#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int num;
    cout << "Enter the element do you want to search =>";
    cin >> num;
    // binary_search(array_name , array_name + size, number)    this is the syntax for binary search
    if (binary_search(arr, arr + 5, num))
    {
        cout << "Element found." << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}