#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    array<int, 7> a{4, 55, 2, 3, 6, 12, 5};
    cout << "And here is the sorted array" << endl;
    sort(a.begin(), a.end());

    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << endl;
    }
    cout<<"this is for decending order"<<endl;
    sort(a.begin(),a.end(),greater<int>());   //function objects or functors
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}