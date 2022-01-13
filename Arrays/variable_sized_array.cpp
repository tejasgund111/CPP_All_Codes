#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, noOfQuery, size, value;
    cin >> n >> noOfQuery;
    vector<vector<int>> arr(n); // n will be the the no. of arrays in the n rows

    for (int i = 0; i < n; i++)
    {
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            cin >> value;
            arr[i].push_back(value);
        }
        // this is for inserting the values in the n number of the vectors
        // here we are inserting the values in the vectors in arr[0], arr[1],...,arr[n-1]   these are the n number of vectors
    }

    int arrayIndex, index;
    // query will be the number of the queries you want
    for (int i = 0; i < noOfQuery; i++)
    {
        cin >> arrayIndex; // this will be the index of row at which the vector is present
        cin >> index;      // this is the index of the elements in the vector which is present at arrayIndex
        cout << arr[arrayIndex][index] << endl;
    }

    return 0;
}
