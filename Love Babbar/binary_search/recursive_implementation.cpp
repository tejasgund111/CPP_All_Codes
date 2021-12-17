// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns location of x in given array arr[l..r] is present,otherwise -1
// Here start = 0 , end = size-1 and key is the value to be find in the particular array

int binarySearch(int arr[], int start, int end, int key)
{
	if (end >= start) {
		int mid = start + (end - start) / 2;

		// If the element is present at the middle itself
		if (arr[mid] == key)
			return mid;

		// If element is smaller than mid, then it can only be present in left subarray
		if (arr[mid] > key)
			return binarySearch(arr, start, mid - 1, key);

		// Else the element can only be present in right subarray
		return binarySearch(arr, mid + 1, end, key);
	}

	// We reach here when element is not present in array
    
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int key = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, key);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element "<< key << " is present at index " << result;
	return 0;
}
