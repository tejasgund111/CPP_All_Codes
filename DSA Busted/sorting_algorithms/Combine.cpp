#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if(arr[j] > arr[j + 1])
    //             swap(arr[j], arr[j + 1]);
    //     }
    // }

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < n ; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //             swap(arr[j], arr[j + 1]);
    //     }
    // }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int miniIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[miniIndex] > arr[j])
                miniIndex = j;
        }
        swap(arr[miniIndex], arr[i]);
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {3, 2, 5, 1, 4};
    bubbleSort(arr, 5);
    // selectionSort(arr, 5);
    // insertionSort(arr, 5);
    display(arr, 5);

    return 0;
}