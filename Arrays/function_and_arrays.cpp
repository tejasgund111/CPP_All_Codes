#include <iostream>
using namespace std;
int add(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + arr[i];
    }
    return total;
}
int main()
{
    int n = 5;
    int ar[n] = {1, 2, 3, 4, 5};

    cout << add(ar, n);

    return 0;
}