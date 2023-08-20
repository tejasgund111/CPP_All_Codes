#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 4, 6, 8, 10};

    int start = 0;
    int end = arr.size();
    int temp = start;

    while (start<end)
    {
        temp = start;
        while (temp <= end)
        {
            vector<int> ans;
            for (int i = start; i < temp; i++)
            {
                ans.push_back(arr[i]);
            }
            temp++;
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        start = start+1;
    }

    return 0;
}