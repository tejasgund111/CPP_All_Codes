#include <iostream>
using namespace std;
void f1(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a = 4, b = 5, c = 6;
    f1(&b, &c);
    // here we pass the addresses of values b and c then the values of them will get swapped and as we are not passing the value of a so the value of a remains as it is and then the values will get finally as follows
    cout << "value of c " << c << " - "
         << "value of a " << a << " - "
         << " value of b " << b << endl;
    cout << c - a - b << endl;

    return 0;
}