#include <iostream>
using namespace std;

#define PI 3.14    // This is macro named PI and it is constant for entire the program

int main()
{
    int r = 5;
    double area = PI * r * r;

    cout << "Area is -> " << area << endl;
    return 0;
}

// It does not occupies the extra storage like the variable
// It's value gets replaced in the entire program before compilation