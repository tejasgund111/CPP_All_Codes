#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr1[5] = {1, 3, 8, 10, 17};
    int arr2[5]= {8,10,17,1,3};
    int arr3[5]= {3,8,10,17,1};

    cout << "Pivot element in array arr1 is at index : " << getPivot(arr1, 5) << endl;
    cout << "Pivot element in array arr2 is at index : " << getPivot(arr2, 5) << endl;
    cout << "Pivot element in array arr3 is at index : " << getPivot(arr3, 5) << endl;

    return 0;
}