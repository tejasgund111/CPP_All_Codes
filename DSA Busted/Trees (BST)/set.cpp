#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1; // set will give the element in the sorted order
    s1.insert(4);
    s1.insert(2);
    s1.insert(3);
    s1.insert(9);
    s1.insert(1);

    for (auto i : s1)
        cout << i << " ";
    cout << endl;

    set<int, greater<int>> s2; // set will give the element in the descending order
    s2.insert(4);
    s2.insert(2);
    s2.insert(3);
    s2.insert(9);
    s2.insert(1);

    for (auto i : s2)
        cout << i << " ";
    cout << endl;

    for (auto it = s2.begin(); it != s2.end(); it++) // using iterator
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // for reversing
    for (auto it = s2.rbegin(); it != s2.rend(); it++) // using iterator
    {
        cout << *(it) << " ";
    }
    cout << endl;

    auto it = s2.find(4);
    if (it == s2.end()) // s2.end() will return the iterator beyond the last element
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;

    // s2.clear(); it will erase the elements in the set
    cout << "Size of the set is : " << s2.size() << endl;

    // As the set does not contains the duplicate elements so count will return either 0 or 1
    if (s2.count(4))
        cout << "found" << endl;
    else
        cout << "Not found" << endl;

    s2.erase(9); // removes the particular element from the set
    for (auto i : s2)
        cout << i << " ";
    cout << endl;

    set<int> s3;
    s3.insert(5);
    s3.insert(4);
    s3.insert(3);
    s3.insert(2);
    s3.insert(1);
    s3.insert(10);
    s3.insert(19);

    auto i1 = s3.find(4); // it will find an iterator for 4
    s3.erase(i1);         // passed iterator will be removed

    for (auto i : s3)
        cout << i << " ";
    cout << endl;

    // auto i2 = s3.find(5);
    // s3.erase(i2, s3.end()); // it will erase from 5 to the end elements

   

    return 0;
}

// set uses the concept of red black tree internally
