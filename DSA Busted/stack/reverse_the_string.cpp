#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<char> s;
  string str = "Tejas";
  for (int i = 0; i < str.length(); i++)
  {
    char ch = str[i];
    s.push(ch);
  }

  string st = "";
  while (!s.empty())
  {
    char ch = s.top();
    st.push_back(ch);
    s.pop();
  }

  cout << "Reversed string is -> " << st << endl;

  return 0;
}

// time complexity -> O(n)
// space complexity -> O(n)