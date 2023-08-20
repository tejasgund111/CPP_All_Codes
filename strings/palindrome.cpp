#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string &s, int i, int j)
{
    if (i > j)
        return true;
    if (s[i] != s[j])
        return false;
    else
        return isPalindrome(s, i + 1, j - 1);
}

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end]))
            return false;
        else
        {
            start++;
            end--;
        }
    }
    return true;
}
/*
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
*/

int main()
{
    string s = "abba";
    bool check = isPalindrome(s, 0, s.length() - 1);
    if (check)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}

