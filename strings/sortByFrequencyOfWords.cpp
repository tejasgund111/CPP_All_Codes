#include <bits/stdc++.h>
using namespace std;

string sortByFrequency(int n, string &s)
{
    // Take a Map to store char with count.
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    // make a string to store characters.
    string str;
    // Queue to store sorted ordered chars from map .
    priority_queue<pair<int, char>> queue;
    for (auto it : mp)
    {
        queue.push({it.second, it.first});
    }
    // Now pop all from queue and store in the string str;
    while (!queue.empty())
    {
        char ch = queue.top().second;
        int x = queue.top().first;
        // cout<< x<< "  "<< ch<<endl;
        queue.pop();
        for (int i = 0; i < x; i++)
        {
            str += ch;
        }
    }
    return str;
}

string sortByFrequency1(int n, string &s)

{
    // Write Your Code here
    unordered_map<char, int> mpp;
    multimap<int, char> revMpp; 
    string res;
    for (int i = 0; i < n; i++)
        mpp[s[i]]++;

    for (auto val : mpp)
    {
        revMpp.insert({val.second, val.first});
    }
    for (auto ch : revMpp)
    {
        for (int i = 0; i < ch.first; i++)
        {
            res = ch.second + res;
        }
    }
    return res;
}


int main()
{
    string str = "abcAbc";
    cout << sortByFrequency1(6, str) << endl;

    return 0;
}

/*
Sample Input 1 :
6
abcAbc
Sample Output 1 :
true
Explanation Of Sample Output 1 :
The frequency of characters ‘a’ and ‘A’ are 1. The frequency of characters ‘b’ and ‘c’ are 2.

Therefore the sorted string is “bbccAa”.


Sample Input 2 :
7
gggjhhh
Sample Output 2 :
true
*/