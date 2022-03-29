#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[5] = {4, 5, 4, 2, 5};
    cout << findUnique(arr, 5);

    return 0;
}
// here in this problem we had used the property XOR
// it gives the value zero when it is xor with the same value
// i.e. a^a = 0
//      0^a = a