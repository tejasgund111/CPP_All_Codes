#include <iostream>
using namespace std;
// function pointer syntax:=>    return_data_type(*function_name)();
int (*ptr)();
int disp()
{
    int a = 7;
    cout << "This function is called using function pointer " << a << endl;
    return a;
}
int print()
{
    cout << "print the context" << endl;
    return 0;
}

int main()
{

    ptr = disp;
    ptr();
    ptr = print;
    ptr();

    return 0;
}