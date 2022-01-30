#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int ans = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1])
        {
            ans = nums[i];
            break;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{1, 4, 3, 2, 5, 7, 4};
    cout << findDuplicate(nums) << endl;
    return 0;
}