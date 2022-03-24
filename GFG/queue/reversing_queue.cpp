#include <bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q)
{
    stack<int> s;
    while (q.empty() == false)
    {
        s.push(q.front());
        q.pop();
    }
    while (s.empty() == false)
    {
        q.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    

    return 0;
}