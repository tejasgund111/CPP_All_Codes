#include <iostream>
using namespace std;
bool checkPalindrome(string s, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (s[i] == s[j])
    {
        return true;
    }
    else
    {
        checkPalindrome(s, i + 1, j - 1);
        return false;
    }
}
int main()
{
    string s = "abcba";
    cout << "Is string palindrome -> " << checkPalindrome(s, 0, s.length() - 1);

    return 0;
}

// The following code is also works same as above one :)

// #include <iostream>
// using namespace std;
// bool checkPalindrome(string s, int i, int j)
// {
//     if (i > j)
//     {
//         return true;
//     }
//     if (s[i] != s[j])
//     {
//         return false;
//     }
//     else
//     {
//         checkPalindrome(s, i + 1, j - 1);
//     }
// }
// int main()
// {
//     string s = "abcba";
//     cout << "Is string palindrome -> " << checkPalindrome(s, 0, s.length() - 1);

//     return 0;
// }