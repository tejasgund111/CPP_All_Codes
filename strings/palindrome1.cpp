#include <bits/stdc++.h> 
using namespace std;
bool isValid(char ch)
{
    if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return 1;
    else
        return 0;
}
char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;
    while (s <= e)
    {
        if (str[s] != str[e])
            return 0;
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

bool checkPalindrome(string str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (isValid(str[i]))
            temp.push_back(str[i]);
    }
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }

    return isPalindrome(temp);
}

// bool checkPalindrome(string s)
// {
//     int start = 0;
//     int end = s.size() - 1;
//     while (start <= end)
//     {
//         if (!isalnum(s[start]))
//         {
//             start++;
//             continue;
//         }
//         if (!isalnum(s[end]))
//         {
//             end--;
//             continue;
//         }
//         if (tolower(s[start]) != tolower(s[end]))
//             return false;
//         else
//         {
//             start++;
//             end--;
//         }
//     }
//     return true;
// }

int main()
{
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if(checkPalindrome(str)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }


    return 0;
}
// i/p:
// 3
// codingninjassajNiNgNidoc
// 5?36@6?35
// aaBBa@

// o/p:
// Yes
// Yes
// No