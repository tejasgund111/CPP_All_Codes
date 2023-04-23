#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &st, int count, int size)
{
    if (count == size / 2)
    {
        st.pop();
        return;
    }
    int num = st.top();
    st.pop();

    solve(st, count++, size);
    st.push(num);
}

void deleteMiddle(stack<int> &st, int size)
{
    int count = 0;
    solve(st, count, size);
}

int main()
{

    return 0;
}