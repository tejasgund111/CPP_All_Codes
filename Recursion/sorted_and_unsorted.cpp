#include <iostream>
#include <vector>
using namespace std;

// index -> current index of entire array
bool checkSorted(vector<int> arr, int index)
{
    // traversed the entire array
    if (index >= arr.size())
    {
        return true;
    }

    if (arr[index] < arr[index - 1])
    {
        return false;
    }

    return checkSorted(arr, index + 1);
}
int main()
{
    cout << "Enter the size of the array -> ";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool answer = checkSorted(arr, 1);
    if (answer)
    {
        cout << "Array is sorted...." << endl;
    }
    else
    {
        cout << "Array is not sorted..." << endl;
    }

    return 0;
}