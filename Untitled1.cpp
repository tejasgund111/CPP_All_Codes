#include <iostream>
using namespace std;
int main()
{
	cout << "Enter password:>>" << flush;

	const string m = "Tejas";

	string i;
	cin >> i;

	while (i != m)
	{
		cout << "Password not accepted" << endl;
		cout << "Enter password Again:>>" << flush;
		cin >> i;
	}
	cout << "password accepted.";
	return 0;
}
// while loop will be executed upto which time the condition is true