#include <bits/stdc++.h>
using namespace std;

int compareVersion(string version1, string version2)
{
    vector<int> v1, v2;
    int i = 0, j = 0;
    int n1 = version1.size(), n2 = version2.size();
    while (i < n1 || j < n2)
    {
        int num1 = 0, num2 = 0;

        while (i < n1 && version1[i] != '.')
        {
            num1 = num1 * 10 + (version1[i] - '0');
            i++;
        }
        while (j < n2 && version2[j] != '.')
        {
            num2 = num2 * 10 + (version2[j] - '0');
            j++;
        }

        if (num1 < num2)
            return -1;
        if (num1 > num2)
            return 1;

        i++;
        j++;
    }

    return 0;
}

int main()
{

    return 0;
}

// Input: version1 = "1.01", version2 = "1.001"
// Output: 0
// Explanation: Ignoring leading zeroes, both "01" and "001" represent the same integer "1".
// Example 2:

// Input: version1 = "1.0", version2 = "1.0.0"
// Output: 0
// Explanation: version1 does not specify revision 2, which means it is treated as "0".
// Example 3:

// Input: version1 = "0.1", version2 = "1.1"
// Output: -1
// Explanation: version1's revision 0 is "0", while version2's revision 0 is "1". 0 < 1, so version1 < version2.


