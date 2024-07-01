#include <bits/stdc++.h>
using namespace std;

// select the minimum and sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int miniIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[miniIndex] > arr[j])
            {
                miniIndex = j;
            }
        }
        swap(arr[miniIndex], arr[i]);
    }
}

// compare the adjacent elements and if the smaller element is at RHS then swap
// pushing the maximum element to last by swapping the adjacent numbers
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
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

void solve(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int k = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {

        arr[k++] = second[index2++];
    }
}

void merge(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    merge(arr, start, mid);
    merge(arr, mid + 1, end);
    solve(arr, start, end);
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
    int arr[5] = {4, 5, 2, 1, 3};
    // selectionSort(arr, 5);
    // bubbleSort(arr, 5);
    insertionSort(arr, 5);
    display(arr, 5);

    return 0;
}