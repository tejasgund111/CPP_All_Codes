#include <iostream>
using namespace std;
int main()
{

    cout << "Enter the number upto which do you want to print the number " << endl;
    int i = 0;    //starting point of the loop
    int m;
    cin>>m;
    while (i < m)     //condition
    {

        cout << "hi" << i << endl;     //printing statement
        i++;    //increment
    }
    cout <<"program terminated." <<endl;
    return 0;
}