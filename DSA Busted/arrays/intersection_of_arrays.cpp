#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j]) // if the elements are equal then move both i and j
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) // move the pointer which one is smaller
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}
int main()
{

    return 0;
}