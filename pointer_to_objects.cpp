#include <iostream>
using namespace std;
class pointer
{
    int a;
    int b;

public:
    int ff;

    void first(int x)
    {
        ff = 85;
        a = x;
        cout << "this function is called using the pointer "
             << "so the value of a is following " << a << " and the value of ff is " << ff << endl;
    }
    void second(int y)
    {
        b = y;
        cout << "this function is also called using the pointer "
             << "so the value of b is as following " << b << endl;
    }
};

int main()
{
    pointer obj;
    pointer *ptr;
    ptr = &obj;
    ptr->ff;       //by using the pointer we are accessing the data member as shown
    ptr->first(5); //by using the pointer we are accessing the member functions as shown
    ptr->second(10);
    cout << "..........for another values................" << endl;
    //also we can access the member as follows using the dot operator by this way
    (*ptr).ff;
    (*ptr).first(6);
    (*ptr).second(11);
    return 0;
}