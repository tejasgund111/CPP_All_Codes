#include <iostream>
using namespace std;

int main()
{
    cout << "Enter array size: ";
    int size;
    cin >> size;
    int arr[size];
    
    cout << "Enter your Elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Your Elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    cout << "Sum of all the elements of the array is: ";
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        // sum+=arr[i];  it will also give the same result
    }
    cout << sum << endl;

    return 0;
}