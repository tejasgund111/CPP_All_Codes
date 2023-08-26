#include <bits/stdc++.h>
using namespace std;

bool isAnagram1(string s, string t)
{
    unordered_map<char, int> count;

    // Count the frequency of characters in string s
    for (auto x : s)
    {
        count[x]++;
    }

    // Decrement the frequency of characters in string t
    for (auto x : t)
    {
        count[x]--;
    }

    // Check if any character has non-zero frequency
    for (auto x : count)
    {
        if (x.second != 0)
        {
            return false;
        }
    }

    return true;
}

bool isAnagram2(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main()
{

    return 0;
}

/*
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

*/