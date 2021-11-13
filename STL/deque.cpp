#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    d.push_back(3);
    d.push_back(4);
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << "first index element->" << d.front() << endl;
    cout << "last index element->" << d.back() << endl;
    cout << "size is->" << d.size() << endl;
    cout << "Is the deque empty->" << d.empty() << endl;
    d.pop_back(); //it removes the last element of the array
    cout << "after pop_back" << endl;
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }

    cout<<endl<<"before erase size is->"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase the size is->"<<d.size()<<endl;
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }

    return 0;
}