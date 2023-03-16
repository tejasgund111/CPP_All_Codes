#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> mp;

    for (auto i : arr)
    {
        mp[i]++;
    }
    vector<int> ans;
    for (auto i : mp)
    {
        ans.push_back(i.second);
    }
    sort(ans.begin(), ans.end());
    // list of occurences to check no two values has same occurences
    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i] == ans[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    bool value = uniqueOccurrences(arr);
    cout << "Ans ->" << value << endl;
    return 0;
}