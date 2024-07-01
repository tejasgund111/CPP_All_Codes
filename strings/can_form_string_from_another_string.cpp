#include <bits/stdc++.h>
using namespace std;

const int MAX = 256;
/*
The idea is to count frequencies of characters of str1 in a count array. Then traverse str2 and decrease frequency of characters of str2 in the count array. If frequency of a characters becomes negative at any point, return false.
*/

bool canMakeStr2(string str1, string str2)
{
    // create a count array and count frequencies characters in str1
    int count[MAX] = {0};
    
    for (int i = 0; i < str1.length(); i++)
        count[str1[i]]++;

    // now traverse through str2 to check if every character has enough counts
    for (int i = 0; i < str2.length(); i++)
    {
        if (count[str2[i]] == 0)
            return false;
        count[str2[i]]--;
    }
    return true;
}

int main()
{
    string str1 = "geekforgeeks";
    string str2 = "geeks";
    if (canMakeStr2(str1, str2))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

// Input : str1 = geekforgeeks, str2 = geeks
// Output : Yes
// Here, string2 can be formed from string1.

// Input : str1 = geekforgeeks, str2 = and
// Output :  No
// Here string2 cannot be formed from string1.