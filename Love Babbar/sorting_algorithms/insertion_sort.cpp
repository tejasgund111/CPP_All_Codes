#include <iostream>
using namespace std;

void insertionSort(int n, int arr[])
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
        }
        // copy temp value
        arr[j + 1] = temp;
    }
}
void display(int n, int arr[])
{
    cout << "Your sorted array-> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {5, 4, 8, 2, 7};
    insertionSort(5, arr);
    display(5, arr);
    return 0;
}