#include <iostream>
using namespace std;
class A {
	int a;

public:
	A() { a = 0; }

	// global friend function
	friend void showA(A& x);
};

void showA(A& x)
{
	// Since showA() is a friend, it can access
	// private members of A
	cout << "A::a=" << x.a;
}

int main()
{
	A b;
	showA(b);
	return 0;
}
