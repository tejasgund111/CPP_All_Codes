#include <iostream>
using namespace std;
template <class T, int max>
class ex
{
    T a[max];

public:
    void set()
    {
        cout << "Enter your elements :" << endl;
        for (int i = 0; i < max; i++)
            cin >> a[i];
    }
    void get()
    {
        cout<<"Result -> ";
        for (int i = 0; i < max; i++)
            cout << a[i] << "  ";
    }
};
int main()
{
    cout<<"for int array"<<endl;
    ex<int, 5>obj;
    obj.set();
    obj.get();
    cout<<endl;

    cout<<"for float array"<<endl;
    ex<float, 3> obj1;
    obj1.set();
    obj1.get();



    return 0;
}