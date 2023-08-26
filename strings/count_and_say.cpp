#include <bits/stdc++.h>
using namespace std;
string count(string s)
{
    string ans = "";
    cout<< "size is >> "<<s.size()<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        int c = 1;
        while (i < s.size() - 1 && s[i] == s[i + 1])
        {
            c++;
            i++;
        }
        cout<<" i is >> "<< i<<endl;
        string t = to_string(c);
        ans += t;
        ans += s[i];
        cout<< ans<<endl;
    }
    return ans;
}

string countAndSay(int n)
{
    string s = "1";
    if (n == 1)
        return s;
    for (int i = 2; i <= n; i++)
    {
        string t = count(s);
        cout<<"t >> "<<t<<endl;
        s = t;
    }

    return s;
}
int main()
{
    cout << countAndSay(4) << endl;

    return 0;
}

// Input: n = 4
// Output: "1211"
// Explanation:
// countAndSay(1) = "1"
// countAndSay(2) = say "1" = one 1 = "11"
// countAndSay(3) = say "11" = two 1's = "21"
// countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"