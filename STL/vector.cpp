#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    // vector<int>v(n);
    // we can also define the size of the vector here i.e. n is the size of vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout << "size of the vector is->" << v.size() << endl;
    cout << "capacity of the vector is->" << v.capacity() << endl;
    cout << "element at second position is ->" << v.at(1) << endl;
    cout << "element at third position is the->" << v.at(2) << endl;
    cout << "first element of the vector is->" << v.front() << endl;
    cout << "last element of the vector is ->" << v.back() << endl;
    cout<<"This can  be the max size ofthe vector->"<<v.max_size()<<endl;
    cout << "before pop" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.pop_back(); //it removes the element at last position
    cout << endl
         << "here the size is->" << v.size() << endl;
    cout << "after pop" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "before clear size->" << v.size() << endl;
    v.clear();
    cout << "after clear size->" << v.size() << endl;

    return 0;
}