#include <bits/stdc++.h>
using namespace std;

void unionArray(vector<int> arr1, vector<int> arr2)
{
    set<int> st;
    for (int i = 0; i < arr1.size(); i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        st.insert(arr2[i]);
    }
    vector<int> vect;
    for (auto i : st)
    {
        vect.push_back(i);
    }
    for (auto i : vect)
    {
        cout << i << " ";
    }
    cout << endl;
}

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j]) // checking for smaller element
        {
            if (ans.size() == 0 || ans.back() != a[i]) // insert in ans if the ans array is empty or the last element not equal to current smaller element
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != b[j])
            {
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    // similarly checking for remaining elements of the array
    while (i < n1)
    {
        if (ans.size() == 0 || ans.back() != a[i])
        {
            ans.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (ans.size() == 0 || ans.back() != b[j])
        {
            ans.push_back(b[j]);
        }
        j++;
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {2, 3, 5};
    unionArray(arr1, arr2);
    vector<int> ans = sortedArray(arr1, arr2);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}