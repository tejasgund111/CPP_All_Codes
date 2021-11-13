// In C++ We can Initialize the Variables with Declaration in Structure.

#include <iostream>
using namespace std;

struct Point {
	int x = 0; // It is Considered as Default Arguments and no Error is Raised
	int y = 1;
};

int main()
{
	struct Point p1;

	// Accessing members of point p1
	// No value is Initialized then the default value is considered. ie x=0 and y=1;
	cout << "x = " << p1.x << ", y = " << p1.y<<endl;

	// Initializing the value of y = 20;
	p1.y = 20;
	cout << "x = " << p1.x << ", y = " << p1.y;
	return 0;
}




/*
Accessing structue membesrs using .(dot) operator
#include <iostream>
using namespace std;
 
struct Point {
    int x, y;
};
 
int main()
{
    struct Point p1 = { 0, 1 };
 
    // Accessing members of point p1
    p1.x = 20;
    cout << "x = " << p1.x << ", y = " << p1.y;
 
    return 0;
}
*/