#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20;
    m["ide"] = 30;              // used for both insertion and accessing
    m.insert({"courses", 153}); // function for inserting values

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // search where key is present or not
    if (m.find("ide") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // value corresponding to a given key
    auto it = m.find("ide");
    if (it != m.end())
    {
        cout << it->second << endl;
    }

    // count function
    if(m.count("ide")){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    // size and erase functions
    cout<<m.size()<<endl;
    m.erase("ide");
    m.erase(m.begin());
    cout<<m.size()<<endl;
    m.erase(m.begin(), m.end());
    cout<<m.size()<<endl;
    return 0;
} 
// this is based on hashing