#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str)
{
  // Write your code here.
  string ans = "";
  string add = "";
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] != ' ')
    {
      add += str[i];
    }
    else if (str[i] == ' ')
    {
      ans = add + ' ' + ans;
      cout<< ans<<endl;
      add = "";
    }
  }
  // cout << ans << endl;
  ans = add + " " + ans;
  return ans;
}

// string reverseString(string &str)
// {
//   // Write your code here.
//   vector<string> words;
//   stringstream s(str);
//   string word;
//   string ans = "";

//   while (s >> word)
//     words.push_back(word);

//   for (int i = words.size() - 1; i >= 0; i--)
//   {
//     if (i == words.size() - 1)
//     {
//       ans += words[i];
//     }
//     else
//     {
//       ans = ans + " " + words[i];
//     }
//   }
//   return ans;
// }

int main()
{
  // string str = "Welcome to Coding Ninjas";
  string str = "when all else fails reboot";

  cout << reverseString(str) << endl;

  return 0;
}
