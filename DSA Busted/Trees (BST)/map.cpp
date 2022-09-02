#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;
    mp.insert({4, 100});
    mp[5] = 200;
    mp.insert({6, 300});

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << " " << endl;
    }

    cout << mp.size() << endl;
    cout << mp[7] << endl; // as the item is not present in the map but we are accessing it, now it will be stored in the map with value 0
    cout << mp.size() << endl;

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << " " << endl;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // m.clear();  empties the map

    if (mp.find(6) == mp.end())
        cout << "Not found" << endl;
    else
        cout << "found" << endl;

    if (mp.count(4) == 0)
        cout << "Not found" << endl;
    else
        cout << "found" << endl;

    auto it1 = mp.lower_bound(4);
    if (it1 != mp.end())
        cout << (*it1).first << endl;
    else
        cout << "No equal or greater value" << endl;

    auto it2 = mp.upper_bound(4);  // it will return just greater value than 4
    if (it2 != mp.end())
        cout << (*it2).first << endl;
    else
        cout << "No greater value" << endl;


    // mp.erase(4); it deletes that key

    // mp.erase(mp.find(4),mp.end());  // it will removes the values from 4 to the end

    return 0;
}

// map uses the concept of red black tree internally

// here the items are ordered according to keys
// also the duplication is avoided