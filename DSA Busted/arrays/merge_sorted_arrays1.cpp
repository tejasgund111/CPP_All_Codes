#include <iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // copy remaining elements of arr1[]
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    // copy remaining elements of arr2[]
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void copyArray(int arr1[],int n, int arr3[]){
    // copying arr3 into arr1
    for(int i=0;i<n;i++){
        arr1[i]=arr3[i];
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int arr1[8] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {};

    merge(arr1, 8, arr2, 3, arr3);
    copyArray(arr1, 8, arr3);
    print(arr1, 8);

    return 0;
}

//  Here in this program we are copying the values from the two arrays into our third array which is also a sorted array 
//And finally copying all the values from the third array into first array