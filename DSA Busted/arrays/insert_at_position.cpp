// This is program for inserting the element at the specific position
//  the index and the position are different concepts take note of that  index = position - 1

#include <iostream>
using namespace std;
#define N 10

int main()
{
    int arr[N];
    int size, val, position;
    cout << "Enter size of your array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Your array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter data you want to insert : ";
    cin >> val;
    cout << "Enter the position : ";
    cin >> position;

    // checking the position valid or not
    if (position <= 0 || position > size + 1)
    {
        cout << "Invalid position" << endl;
    }
    // checcking if the position is first or not
    else if ((position - 1) == 0)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = val;
        size++; // incrementing the size after inserting the element
    }
    // for other positions than first position and also will be true for the position next to the size of the previous array...  means position = size + 1 
    else
    {
        for (int i = size - 1; i >= position - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[position - 1] = val;
        size++; // incrementing the size after inserting the element
    }

    cout << "Modified array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}