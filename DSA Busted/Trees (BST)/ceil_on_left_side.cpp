// here are the functions to return the ceiling values on the left side of the array
#include<bits/stdc++.h>
using namespace std;
void ceilOnLeftSide(int arr[], int n)
{
    cout << "-1"
         << " ";
    for (int i = 1; i < n; i++)
    {
        int diff = INT_MAX;
        for (int j = 0; j < i; j++)
            if (arr[j] >= arr[i])
                diff = min(diff, arr[j] - arr[i]);

        if (diff = INT_MAX)
            cout << "-1"
                 << " ";
        else
            cout << arr[i] + diff << " ";
    }
}
// this function has time complexity O(n^2)

void printPrevGreater(int arr[], int n)
{

    set<int> s;

    for (int i = 0; i < n; i++) {

        // First search in set
        auto it = s.lower_bound(arr[i]);

        if (it == s.end()) // If no greater found
            cout << "-1" << " ";

        else
            cout << *it << " ";
        // Then insert
        s.insert(arr[i]);

    }
}
// this function has time complexity O(nlogn)

int main(){
    
    return 0;
}