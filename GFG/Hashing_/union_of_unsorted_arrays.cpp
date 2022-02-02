#include <bits/stdc++.h>
using namespace std;

void printUion(int a[], int b[], int m, int n)
{
    unordered_set<int> s; // unordered set will not include the doubled elements

    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        s.insert(b[j]);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int countElement(int a[], int b[], int m, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        s.insert(b[j]);
    }

    return s.size();
}
// O(m+n)  time complexity

int main()
{
    int a[4] = {15, 20, 5, 15};
    int b[5] = {15, 15, 15, 20, 10};
    printUion(a, b, 4, 5);
    cout << "no. of elements in union is " << countElement(a, b, 4, 5) << endl;

    return 0;
}
