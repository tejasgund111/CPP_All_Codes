#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char getMaxOccCharacter(string s)
{

    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find maximum occ character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}

void get(string s){
    map<char, int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    char ch;
    int in;
    int maxi = 0;
    for(auto i:mp){
        cout<< i.first << " " << i.second << endl;
        if(i.second > maxi){
            ch = i.first;
            in = i.second;
        }
    }
    cout << "char->"<<ch<<" "<<in<<endl;
}

int main()
{
    string s;
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;
    get(s);
    return 0;
}