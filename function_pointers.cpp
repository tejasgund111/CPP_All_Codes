#include <iostream>
using namespace std;
// function pointer syntax:=>    return_data_type(*function_name)();
typedef int (*ptr)();
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
    ptr p;
    p = &disp;
    p();
    p = &print;
    p();

    return 0;
}