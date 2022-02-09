#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }cout<<endl;

    //shorter implementation
    for (auto it : v)
    {
        cout << it << " ";
    }
    // both the result will be the same
    
    return 0;
}