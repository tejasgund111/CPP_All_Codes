#include <iostream>
using namespace std;
int main()
{
	string password = "Tejas";
	string input;
	cout << "You have only three chances so enter it correctly." << endl;
	cout << "enter your password:" << flush;
	int a = 1;
	while (a < 4)
	{
		cin >> input;

		if (input == "Tejas")
		{

			cout << "password Accepted." << endl;
			break;
		}

		if (input != "Tejas")
		{
			cout << "Access denied.Go back and enter correct password." << endl;
		}
		a++;
	}
	cout << "Terminated."<<endl;

		return 0;
}
