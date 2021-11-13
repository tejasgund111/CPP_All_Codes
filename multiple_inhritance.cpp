#include <iostream>
using namespace std;
class myclass1
{
public:
    void myclass1_function()
    {
        cout << "this is my first base class" << endl;
    }
};
class myclass2
{
public:
    int a;

    void myclass2_function()
    {
        cout << "this is my second base class " << endl;
    }
};
class myclass3 : public myclass1, public myclass2
{
public:
    myclass3_function()
    {
        cout << "This is the class derived from the myclass1 and myclass2 " << a;
    }
};

int main()
{
    myclass3 obj;
    obj.a = 5;
    obj.myclass3_function();
    return 0;
}
