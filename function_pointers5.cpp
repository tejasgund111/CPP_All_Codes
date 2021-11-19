#include <iostream>
using namespace std;
void printName(char *name)
{
    cout << "Name is : " << name << endl;
}
int main()
{
    char s[20];  // Array declaration
    void (*ptr)(char *);  //function pointer declaration
    ptr = printName;  //storing the address of printName in ptr
    cout << "Enter the name of the person : " << flush;
    cin >> s;

    ptr(s);  //calling printName() function

    return 0;
}