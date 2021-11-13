// This is the program for the virtual function
#include <iostream>
using namespace std;
class base
{
public:
    virtual void fun() = 0;
};
class derived1 : public base
{
public:
    void fun()
    {
        cout << "1.This is the function from the derived1 class." << endl;
    }
};
class derived2 : public base
{
public:
    void fun()
    {
        cout << "2.This is the function from the derived2 class." << endl;
    }
};

int main()
{
    base *b1;
    derived1 d1;
    derived2 d2;
    b1 = &d1;
    b1->fun(); //this will give access to the function from the derived1 class.
    b1 = &d2;
    b1->fun(); //this will give access to the function from the derived2 class.

    return 0;
}

// 1.It is the  type of virtual which is not defined in the base class.
// 2.Only derived class can define the function.
