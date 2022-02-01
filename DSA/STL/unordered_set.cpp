#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // cout<<"size is "<<s.size()<<endl;
    // s.clear();  // clears the unorder set
    // cout<<"size is "<<s.size()<<endl;

    // find function on unordered set
    if(s.find(15)==s.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }

    //count function  - it gives the boolean value if present or not
    if(s.count(15)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    // erase function - it removes the item or removes the range of the item
    // cout<<s.size()<<endl;
    // s.erase(15);  // will erase 15
    // cout<<s.size()<<endl;
    // auto it = s.find(10);
    // s.erase(it);
    // cout<<s.size()<<endl;

    s.erase(s.begin(),s.end());  // this will remove all the elements from the unordered set

    








    return 0;
}
// in this type the output is not same as the inserting sequence...on different machines the output will be different