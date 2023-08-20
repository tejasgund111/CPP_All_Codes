#include <bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
char highestOccurringChar(char input[])
{
    // Write your code here
    map<char, int> mp;
    int n = getLength(input);
    if (n == 2)
    {
        return input[0];
    }
    for (int i = 0; i < n; i++)
    {
        mp[input[i]]++;
    }
    int maxi = INT_MIN;
    for (auto i : mp)
    {
        maxi = max(maxi, i.second);
    }
    cout << maxi << endl;
    for (auto i : mp)
    {
        if (i.second == maxi)
            return i.first;
    }
}

int main()
{
    char input[] = "abdefgbabfba";
    cout << highestOccurringChar(input) << endl;
    return 0;
}