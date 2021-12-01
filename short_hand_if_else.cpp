#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a no. : ";
    int b;
    cin >> b;
    int a = b > 5 ? 100 : 200;
    // it means if b is greater than 5 print 100 else print 200
    cout << "Your OutPut is : " << a << endl;
    return 0;
}