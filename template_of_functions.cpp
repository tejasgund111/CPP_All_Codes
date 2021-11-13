#include <iostream>
using namespace std;
template <class T>
void fun1(T a, T b)
{
    if (a > b)
    {
        cout << "a is greater." << endl;
    }
    else
    {
        cout << "b is greater." << endl;
    }
}

int main()
{
    fun1<int>(55, 7);        //for integer numbers
    fun1<float>(-6.2, -1.5); //for float numbers

    return 0;
}