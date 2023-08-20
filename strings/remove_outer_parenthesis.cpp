#include <bits/stdc++.h>
using namespace std;
string removeOuterParentheses(string s)
{
    string result = "";
    stack<char> st;
    for (auto i : s)
    {
        if (i == '(')
        {
            if (!st.empty())
            {
                result.push_back(i);
            }
            st.push(i);
        }
        else
        {
            st.pop();
            if (!st.empty())
            {
                result.push_back(i);
            }
        }
    }
    return result;
}
int main()
{

    return 0;
}

/*
Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

*/
