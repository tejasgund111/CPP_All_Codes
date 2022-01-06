#include <iostream>
using namespace std;

int getSum(int arr[], int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    else
    {
        int remainingPart = getSum(arr + 1, n - 1);
        sum = arr[0] + remainingPart;
        return sum;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int n = 5;
    cout << "Answer is -> " << getSum(arr, n) << endl;
    return 0;
}