#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Upto how many no.s do you want to print the series " << endl;
    cin >> n;

    int a = 0;
    int b = 1;
    cout<<a<<" , "<<b<<" , ";

    for (int i = 1; i < n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " , ";

        a = b;
        b = nextNumber;
    }
    return 0;
}

//program flow
//starting is from 0 and 1
//then the nextNumber is a+b
//after that a will take the value of b and b will take the value of nextNumber
//then the repitition of loop will continue