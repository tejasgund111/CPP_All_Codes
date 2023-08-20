#include <iostream>
using namespace std;

int main()
{
    int num = isalnum('t');
    cout << num << endl;
    if (num)
    {
        cout << "TRUE at " << num;
    }
    else
        cout << "FALSE at " << num;
    return 0;
}

// ..........Return value............

// Nonzero: if the argument values are in the range (a-z,A-Z,0-9), then isalnum returns a non-zero value, i.e., TRUE.

// 0: if the argument is not between the defined range(a-z,A-Z,0-9), then isalnum returns 0, i.e., FALSE.