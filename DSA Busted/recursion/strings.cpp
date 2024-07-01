#include <bits/stdc++.h>
using namespace std;

// 1. reverse string

// two pointer approach
void reverse(string &s, int i, int j)
{
    if (i >= j)
        return;
    swap(s[i], s[j]);
    reverse(s, i + 1, j - 1);
}

// Here travel till the end of string and at the time of returning
// enter the characters in the ans string
void reverse1(string s, string &ans, int index)
{
    if (index == s.size())
        return;
    reverse1(s, ans, index + 1);
    ans.push_back(s[index]);
}

// 2. subsequences of string

// i/p -> "abc"
// o/p -> "", a, b, c, ab, bc, ac, abc

void printSubsequences(string str, int index, string ans)
{
    if (index == str.length())
    {
        cout << ans << endl;
        return;
    }

    // include
    printSubsequences(str, index + 1, ans + str[index]);

    // exclude
    printSubsequences(str, index + 1, ans);
}

// void printSubsequences(string str, int index, string ans, vector<string> &vect)
// {
//     if (index == str.length())
//     {
//         vect.push_back(ans); // storing output in the vector
//         return;
//     }

//     // include
//     printSubsequences(str, index + 1, ans + str[index], vect);

//     // exclude
//     printSubsequences(str, index + 1, ans, vect);
// }

// 3. Add two strings
// i/p -> a = "12", b = "34"
// o/p -> "64"

void addString(string a, string b, int carry, string &ans, int i, int j)
{
    if (i < 0 && j < 0 && carry == 0)
    {
        return;
    }

    // for converting the characters into integers
    int first = 0;
    int second = 0;
    if (i >= 0)
        first = a[i] - '0';
    if (j >= 0)
        second = b[j] - '0';

    int sum = first + second + carry;
    int lastDigit = sum % 10;
    carry = sum / 10;

    ans.push_back(lastDigit + '0'); // converting integer to char
    addString(a, b, carry, ans, i - 1, j - 1);
}

int main()
{
    // string s = "Tejas";
    // cout << s << endl;
    // reverse(s, 0, s.length() - 1);
    // cout << s << endl;

    // string a = "value";
    // string ans = "";
    // reverse1(a, ans, 0);
    // cout << ans << endl;

    // string str = "abc";
    // string ans1 = "";
    // vector<string> vect;
    // printSubsequences(str, 0, ans1);
    // printSubsequences(str, 0, ans1, vect);
    // for (auto i : vect)
    // {
    //     cout << i << endl;
    // }

    string one = "43";
    string two = "343";
    int carry = 0;
    string ans = "";

    addString(one, two, carry, ans, one.length() - 1, two.length() - 1);
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}