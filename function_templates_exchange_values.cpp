#include <iostream>
using namespace std;
template <class T>
void alter(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout << "This is the program for exchanging the values." << endl;
    int a = 9, b = 8;
    float c = 2.2, d = 3.3;
    cout << "Before exchange the int  values are " << a << "  " << b << endl;
    alter<int>(a, b);
    cout << "After exchange the int values are " << a << "  " << b << endl;
    cout << "Before exchange the float values are " << c << "   " << d << endl;
    alter<float>(c, d);
    cout << "After exchange the float values are " << c << "  " << d << endl;

    return 0;
}