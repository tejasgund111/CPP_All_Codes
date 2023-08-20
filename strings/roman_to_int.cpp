#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int n = s.length();
    int result = mp[s[n - 1]];

    for (int i = n - 2; i >= 0; i--)
    {
        if (mp[s[i]] < mp[s[i + 1]])
        {
            result -= mp[s[i]];
        }
        else
        {
            result += mp[s[i]];
        }
    }
    return result;
}

string intToRoman(int num)
{
    int intCode[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string code[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string str = "";
    for (int i = 0; i < 13; i++)
    {
        while (num >= intCode[i])
        {
            str += code[i];
            // str.append(code[i]);
            num -= intCode[i];
        }
    }
    return str;
}

int main()
{

    return 0;
}

// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
