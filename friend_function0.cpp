#include <iostream>
using namespace std;
class xyz;
class abc
{
    int a;

public:
    abc() {}
    friend int fun(abc, xyz); //here we defined the friend function for class abc and xyz in class abc
};
class xyz
{
    int b;

public:
    xyz() {}
    friend int fun(abc, xyz); //here we defined the friend function for class abc and xyz in class xyz
};
int fun(abc obj1, xyz obj2)
{
    obj1.a = 9;              //here we give value to private int a
    obj2.b = 5;              //here we give value to private int b
    int x = obj1.a + obj2.b; //here we take addition of the private integers a and b using objects of the different classes.
    return x;
}

int main()
{
    abc f;
    xyz j;
    cout << "value of x is " << fun(f, j) << endl;

    return 0;
}