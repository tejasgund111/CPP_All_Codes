#include <iostream>
using namespace std;
int fun(int *ptr, int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += *ptr;
        ptr++;
    }
    return sum;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Sum of elements in the array is : " << fun(arr, 5) << endl;
    return 0;
}