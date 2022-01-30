#include <iostream>
#include "Main.cpp"
// by this method we can define our class in our program which is written in another file
using namespace std;

int main()
{
    Main m;
    cout << "Size : " << sizeof(m) << endl;

    return 0;
}