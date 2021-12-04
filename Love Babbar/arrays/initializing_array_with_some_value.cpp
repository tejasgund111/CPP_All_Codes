// Code for initializing the array with any required value


#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    fill_n(arr, 10, 92); // By this code all the values of the array will get initialized by 92
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  "; // By this the array will print the initialized value (i.e. 92) 10 times
    }
}