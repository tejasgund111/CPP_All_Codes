#include <iostream>
using namespace std;
typedef void (*ptr)(); //pointer declaration
void fun1()
{
    cout << "This is the fun1 " << endl;
}
void fun2()
{
    cout << "This is the fun2" << endl;
}

int main()
{
    ptr p;     //create pointer
    p = &fun1; //initialize pointer
    p();
    p = &fun2;
    p();

    return 0;
}
//here in this program we call the functions using the function pointers
