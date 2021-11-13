#include <iostream>
using namespace std;
void starline(); //function declaration
// (prototype)
int main()
{
starline(); //call to function
cout << "Data type Range" << endl;
starline(); //call to function
cout << "char -128 to 127" << endl
<< "short -32,768 to 32,76" << endl
<< "int System dependent" << endl
<< "long -2,147,483,648 to 2,147,483,647" << endl;
starline(); //call to function
return 0;
}
//--------------------------------------------------------------
// starline()
// function definition
 //function declarator
void starline()
{
for(int j=0; j<45; j++) //function body
cout <<'*';
cout << endl;
}