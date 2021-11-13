
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double d = 2.0;
    double e;
    cin >> e;
    cout << fixed << endl;
    cout << setprecision(1) << e + d << endl; //setprecision(n) where n is the no. of digits wou want after the decimal point, but for this #include<iomanip> is necessary.

    return 0;
}