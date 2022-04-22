#include<iostream>
using namespace std;

int main()
{
    int a = 5, b;
    b = a++;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    int c = 5, d;
    d = ++c;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;

    return 0;
}