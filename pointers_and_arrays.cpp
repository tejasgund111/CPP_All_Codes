#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    int *ptr;
    ptr = arr;
    *ptr = 1;
    ptr = &arr[1];
    *ptr = 2;
    ptr + 1;
    *(ptr + 1) = 3;
   
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}