#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    cout << "Sum is : " << ptr(2, 5) << endl;

    return 0;
}