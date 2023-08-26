#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    int len = s.size();
    double num = 0;
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    bool positive = s[i] == '+';
    bool negative = s[i] == '-';
    positive == true ? i++ : i;
    negative == true ? i++ : i;
    while (i < len && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        if (num >= INT_MAX || num <= INT_MIN)
            break;
        i++;
    }
    num = negative ? -num : num;
    cout << num << endl;
    num = (num > INT_MAX) ? INT_MAX : num;
    num = (num < INT_MIN) ? INT_MIN : num;
    cout << num << endl;
    return int(num);
}

int stringToInt(string s)
{
    long num = 0;
    int i = 0;
    // for checking white spaces
    while (i < s.length() && s[i] == ' ')
        i++;
    if (i >= s.length())
        return 0;

    int sign = 1;
    if (s[i] == '+' || s[i] == '-')
    {
        sign = (s[i] == '+') ? +1 : -1;
        i++;
    }

    while (i < s.length() && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        if (num >= INT_MAX || num <= INT_MIN)
            break;
        i++;
    }
    if (sign)
        num = num * sign;
    if (num >= INT_MAX)
        num = INT_MAX;
    if (num <= INT_MIN)
        num = INT_MIN;

    return num;
}

int main()
{
    cout << myAtoi("  455") << endl;
    return 0;
}