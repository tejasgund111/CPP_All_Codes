#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your full name -> ";
    getline(cin, name);  // this function reads the whole string which you entered 
    cout << "Hello Mr." << name << endl;
    return 0;
}