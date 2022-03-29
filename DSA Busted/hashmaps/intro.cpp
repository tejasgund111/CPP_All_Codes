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
    // it will print 0
    // it will make an entry corresponding to 0 for unknownKey

    return 0;
}