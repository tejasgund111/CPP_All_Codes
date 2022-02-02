#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    return s.size();
}

// shorter implementation
int countDist(int arr[], int n)
{
    unordered_set<int> s(arr, arr + n);
    // using begin and ending iterator

    return s.size();
}
// O(n) -> time complexity
int main()
{
    int arr[5] = {10, 20, 10, 20, 30};

    cout<<countDistinct(arr, 5)<<endl;;
    cout<<countDist(arr, 5);

    return 0;
}

// as we are inserting elements in unordered set it will not insert the copy of the elements so its size will be the count of the distinct elements