#include <stdio.h>

int main()
{

    printf("Enter the size of array : \n");
    int size;
    scanf("%d,&size");

    int arr[size];

    printf("Enter the elments in the array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array are : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("sum of elements in the array are : ");
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }

    printf("Sum of elements in the array are : ", sum);
}