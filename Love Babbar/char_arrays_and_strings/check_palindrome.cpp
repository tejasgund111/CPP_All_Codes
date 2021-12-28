#include <iostream>
#include <cstring> 
using namespace std;

// function for converting upper case characters to lower case
char toLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool check(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        // here direct conversion of the uppercase to lowercase is done and then checked
        if (toLower(str[s]) != toLower(str[e]))
        {
            return 0;
        }
        else if (str[s] == str[e])
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char str[8];
    cout << "Enter your string ";
    cin >> str;
    int n = strlen(str); // for finding the length of the character array
    
    cout << "Palindrome or not -> " << check(str, n);

    return 0;
}

// string which having the same reversed string as the original one are called palindrome
// eg. "noon",  "kanak", etc.

// case sensitive means taking uppercase and lowercase character same for comparison  eg. A = a 