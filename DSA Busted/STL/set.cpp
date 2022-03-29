#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(7);
    s.insert(2);
    s.insert(2);
    s.insert(9);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    s.erase(it);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Count of 5 is -> " << s.count(5) << endl;
    cout << "Count of 6 is -> " << s.count(6) << endl;

    set<int>::iterator itr = s.find(5);
    cout << "Value present at itr -> " << *it << endl;
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
// Set stores one value only one times even we give the value many times
// It also gives the values in ascending order