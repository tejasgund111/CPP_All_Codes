#include <bits/stdc++.h>
using namespace std;

int countElements(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int max = nums[nums.size() - 1];
    int min = nums[0];
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > min && nums[i] < max)
        {
            count++;
        }
    }
}

int main()
{
    vector<int> nums{11, 7, 2, 15};
    cout<<countElements(nums)<<endl;

    return 0;
}

// Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in numeric_limits

// explanation: 1)the element 7 has the element strictly smaller element 2 and strictly greater element 11
// 2)element 11 has element 7 strictly smaller than it and element 15 strictly greater than it