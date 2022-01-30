#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    // Write your code here
    int n = arr.size();
    //     int dup=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])               
            {
                return arr[j];
            }
        }
    }
    // 	return dup;
}
int main()
{
    vector<int> v{8, 7, 2, 5, 4, 7, 1, 3, 6};
    cout << findDuplicate(v);
    return 0;
}
