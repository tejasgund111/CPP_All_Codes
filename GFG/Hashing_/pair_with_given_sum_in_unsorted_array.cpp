#include <bits/stdc++.h>
using namespace std;

// naive solution
bool isPair(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
                return true;
        }
    }
    return false;
}
// O(n^2)  time complexity

bool ispair(int arr[], int n, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(sum - arr[i]) != s.end())
            return true;
        s.insert(arr[i]);
    }
    return false;
}
// O(n)  time complexity

int main()
{
    int arr[5] = {3, 2, 8, 15, -8};
    int a[4] = {2,4,6,3};
    cout << isPair(arr, 5, 17) << endl;
    cout << ispair(a, 4, 11) << endl;

    return 0;
}

// i/p: {3,2,8,15,-8}  sum = 17  =>pair is 15 and 2
// o/p: yes

// i/p: {2,4,6,3}  sum = 11   => no pair is present
// o/p: no

// i/p: {5,8,-3,6}  sum = 3   => pair is 6 and -3
// o/p: yes