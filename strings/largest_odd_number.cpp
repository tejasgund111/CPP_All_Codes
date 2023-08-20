#include <bits/stdc++.h>
using namespace std;

string largestOddNumber(string s)
{
    int var = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] % 2 != 0)
        {
            var = i;
        }
    }
    if (var != -1)
    {
        return s.substr(0, var + 1);
    }
    else
    {
        return "";
    }
}

string largestOddNumber1(string num)
{
    for (int i = num.length() - 1; i >= 0; i--)
    {
        if ((num[i] - '0') % 2 != 0)
        {
            return num.substr(0, i + 1);
        }
    }
    return "";
}

int main()
{
    
    return 0;
}


/*

Input: num = "52"
Output: "5"
Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.

Input: num = "4206"
Output: ""
Explanation: There are no odd numbers in "4206".

*/
