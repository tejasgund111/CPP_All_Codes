// check if characters of a given string can be rearranged to form a palindrome
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

bool canFormPalindrome(string str)
{
    // Create a count array and initialize all values as 0
    int count[NO_OF_CHARS] = {0};

    // For each character in input strings, increment count in the corresponding count array
    for (int i = 0; str[i]; i++)
        count[str[i]]++;

    // Count odd occurring characters
    int odd = 0;
    for (int i = 0; i < NO_OF_CHARS; i++)
    {
        // n&1 is 1, then odd, else even
        if (count[i] & 1)
            odd++;

        if (odd > 1)
            return false;
    }

    // Return true if odd count is 0 or 1,
    return true;
}


int main()
{
    canFormPalindrome("abcaaba") ? cout << "Yes\n" : cout << "No\n";
    canFormPalindrome("aab") ? cout << "Yes\n" : cout << "No\n";
    canFormPalindrome("aabbaa") ? cout << "Yes\n" : cout << "No\n";
    return 0;
}

/*

i/p: geeksforgeeks
o/p: No

i/p: geeksogeeks
o/p: Yes

*/
