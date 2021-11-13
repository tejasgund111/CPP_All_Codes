#include <iostream>
using namespace std;
int getmax(int num1, int num2, int num3)
{

    if (num1 >= num2 && num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}
int main()
{
    cout << "max no. is : " << getmax(4, 5, 9) << endl;
    int a = getmax(77, 55, 66);
    cout << "max no. is : " << a << endl;
    return 0;
}