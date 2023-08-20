#include <bits/stdc++.h>
using namespace std;

// it removes the all the adjacent duplicates in the string

// TC-> O(n^2)
string removeDuplicates(string s)
{
    if (s.length() < 2)
        return s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 2);
            return removeDuplicates(s);
        }
    }
    return s;
}

// TC-> O(n)
string removeDuplicatesUsingStack(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
            st.push(s[i]);
        else if (st.top() == s[i])
            st.pop();
        else
            st.push(s[i]);
    }

    string res = "";
    while (!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(), res.end());

    return res;
}

int main()
{
    cout << removeDuplicates("abbaca") << endl;

    return 0;
}

/*

Input: s = "abbaca"
Output: "ca"
Explanation:
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

*/