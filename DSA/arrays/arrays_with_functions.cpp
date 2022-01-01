#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl
         << "Printing done..." << endl;
}
int main()
{
    int first[4] = {1, 2, 3, 4};
    printArray(first, 4);

    return 0;
}

// for finding size of array :
// int ArraySize = sizeof(Array) / sizeof(int) ;

// it actually means sizeof(Array) gives the size of array * 4 ....because int having 4 bytes...
// so we are dividing the size of array by sizeof(int)..
// then it will give the actual size of the array
// but it will give wrong output when actual size of array is more but we are giving less elements to the array