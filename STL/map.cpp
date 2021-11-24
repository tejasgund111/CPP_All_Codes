#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> m1;
    m1["one"] = 1;
    m1["two"] = 2;
    m1["three"] = 3;
    m1["four"] = 4;
    m1["five"] = 5;
    //also we can insert by this way also
    m1.insert({{"six", 6}, {"seven", 7}});
    map<string, int>::iterator itr;
    for (itr = m1.begin(); itr != m1.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    cout << "size is " << m1.size() << endl;
    cout << "max_size is " << m1.max_size() << endl;
    cout << "Empty or not " << m1.empty() << endl;

    return 0;
}
//this is like one to one mapping.