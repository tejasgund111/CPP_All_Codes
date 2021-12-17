#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, x, result;
    cout << "Enter n -> ";
    cin >> n;
    cout << "Enter x -> ";
    cin >> x;
    result = pow(n, x);
    cout << n << "^" << x << " = " << result << endl;

    return 0;
}