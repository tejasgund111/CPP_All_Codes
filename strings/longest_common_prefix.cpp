#include <bits/stdc++.h>
using namespace std;

string commonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    sort(arr.begin(), arr.end());
    string s1 = arr[0];
    int i = 0;
    string s2 = arr[n - 1];
    int j = 0;
    string ans = "";
    while (i < s1.length() && j < s2.length() && (s1[i] == s2[j]))
    {
        ans += s1[i];
        i++;
        j++;
    }
    if (ans == "")
    {
        ans += "-1";
    }
    return ans;
}

int main()
{

    return 0;
}

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

// string longestCommonPrefix(vector<string>& str)
// {
//     sort(str.begin(), str.end()); //sorting the array
//     string ans=""; //creating a new empty string to store the common prefixes
//     for(int i=0;i<str[0].length();i++) // max iterations = length of the first string
//     {
//         if(str[0][i]!=str[str.size()-1][i]) // checking the characters of the first and last string
//             break;
//         ans+=str[0][i]; // concatinate if the characters are matching
//     }
//     return ans;
// }