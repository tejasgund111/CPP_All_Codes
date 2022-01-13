#include <iostream>
using namespace std;

void insertHeap(int *arr, int &size, int value)
{
    size = size + 1;
    arr[size] = value;
    int i = size;

    while (i > 1) // checking upto root node which is at index 1
    {
        int parent = i / 2;
        if (arr[parent] < arr[i])
        {
            swap(arr[parent], arr[i]);
            i = parent;
        }
        else
        {
            return;
        }
    }
}

int main()
{
    int n, value;
    cout<<"Enter size ";
    cin>>n;
    int arr[15];

    for(int i=1;i<=n;i++){
        cout<<"Enter element at index "<<i<<" -> ";
        cin>>arr[i];
    }

    cout<<"Enter your value which you want to insert -> ";
    cin>>value;

    insertHeap(arr, n, value);

    cout<<"Your result is -> "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}