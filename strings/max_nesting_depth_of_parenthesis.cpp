#include <bits/stdc++.h>
using namespace std;

// int maxDepth(string s) {
// 	// Write your code here.
// 	int ans = 0;
// 	int maxans = INT_MIN;
// 	for(int i=0;i<s.size();i++){
// 		if(s[i] == '(')
// 			ans++;
// 		else if(s[i] == ')')
// 			ans--;
// 		maxans = max(ans, maxans);
// 	}
// 	return maxans;
// }

int maxDepth(string s)
{
    stack<char> st;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
            int stackSize = st.size();
            ans = max(ans, stackSize);
        }
        else if (s[i] == ')')
        {
            st.pop();
        }
    }

    return ans;
}

int main()
{

    return 0;
}

/*
Sample Input 1:
15
(3*(4*(5*(6))))

Sample Output 1:
4

*/