#include <iostream>
using namespace std;

// here n is the length of the array and sum is the given value of the elements
// we have to find the length of the array having the total sum of the elemtnts equals to the parameter sum given to us

int getMaxLen(int arr[], int n, int sum)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            res = max(curr_sum, j - i + 1);
        }
    }

    return res;
}

int main()
{

    return 0;
}