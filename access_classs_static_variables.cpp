#include <iostream>
using namespace std;
class A
{
    static int a;

public:
    static int b;
    static int c;
    void fun(int a)
    {
        //we can also give value to c here as below but have to declare it outside class
        c = 4;
        cout << "value of c is " << A::c << endl;

        cout << "a from fun is: " << a << endl;
        cout << "private a is:" << A::a << endl;
        cout << "Value of static variable b is : " << A::b << endl;
    }
};

int A ::a = 5;
int A ::b = 6;
int A::c;  //declared outside but defined inside the class

int main()
{
    A x;
    x.fun(5);
    cout << A::b << endl;

    return 0;
}