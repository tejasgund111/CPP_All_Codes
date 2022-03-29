#include <iostream>
using namespace std;

int powerCalculate(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else{
        return a*powerCalculate(a,b-1);
    }
}

int main()
{
    int a, b;
    cout << "Enter a->";
    cin >> a;
    cout << "Enter b->";
    cin >> b;
    cout<<powerCalculate(a,b)<<endl;

    return 0;
}