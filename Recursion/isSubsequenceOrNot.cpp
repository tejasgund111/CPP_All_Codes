#include<bits/stdc++.h>
using namespace std;


int solve(string s, string t, int i, int j)
{
    if (i == s.size() || j == t.size())
        return 0;
    if (s[i] == t[j])
    {
        return 1 + solve(s, t, i + 1, j + 1);
    }
    else
    {
        return solve(s, t, i, j + 1);
    }
}

bool isSubsequence(string s, string t)
{
    int x = solve(s, t, 0, 0);
    return x == s.size();
}

int main(){
    
    return 0;
}

// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

// Example 1:

// Input: s = "abc", t = "ahbgdc"
// Output: true
// Example 2:

// Input: s = "axc", t = "ahbgdc"
// Output: false
 