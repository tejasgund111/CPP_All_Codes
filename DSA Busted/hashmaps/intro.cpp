#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion
    // 1
    pair<string, int> p = make_pair("tejas", 3);
    m.insert(p);

    // 2
    pair<string, int> q("gund", 2);
    m.insert(q);

    // 3
    m["heera"] = 1;

    m["heera"] = 4; // it will override line no. 20 value (means updation)

    // key and value will be unique (never be duplicate of any other)

    // search
    cout << m["heera"] << endl;
    cout << m.at("gund") << endl;

    // cout<<m.at("unknownKey")<<endl;  // we will get an error in this case because we don't inserted any key like this

    cout << m["unknownKey"] << endl; // this is different from the above one
    //  it will print 0
    //  it will make an entry corresponding to 0 for unknownKey

    // size
    cout << "Size is -> " << m.size() << endl;

    // to check presence
    cout << m.count("bro") << endl; // it will print 0 if the key is absent and print 1 if the key is present

    // erase
    m.erase("tejas");
    cout << "Size is -> " << m.size() << endl; // here size will be reduced by 1

    // traversing
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    // iterator
    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}

//  1. unordered_map
//in unordered_map the keys will be printed in the random order
// time complexity -> O(1)

// 2. map
// in case of map the keys will be printed in the random order // it is based upon the BST
// time complexity -> O(log n)
