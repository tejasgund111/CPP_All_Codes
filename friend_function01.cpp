#include <iostream>
using namespace std;
class abc
{
    int a;

public:
    abc() {}
    friend int fun(abc);
};
int fun(abc obj)
{
    obj.a = 10; //here we are accessing the private variable using our obj.
    return obj.a;
}

int main()
{
    abc f;
    cout << fun(f);

    return 0;
}