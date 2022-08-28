#include <iostream>
using namespace std;

int main()
{

    // variable declarationn
    // datatype variable_name = value

    int a;
    int b = 7;
    a = 9;

    cout << "hello world" << endl;
    // cout << "hello duniyaa"<< a<< endl;

    string str = "Raj";

    char ch = 'a';

    cout << "value of a : " << a << endl
         << "value of b is : " << b << endl
         << "value of str is : " << str << endl
         << "value of ch is : " << ch << endl;

    // conditionals cout 
    if (2 + 3 == 6)
    {
        cout << "true" << endl;
    }
    else if (6 + 5 == 10)
    {
        cout << "this is also true" << endl;
        if (true)
        {
            cout << "this is also going to run" << endl;
        }
    }
    else
    {
        cout << "false" << endl;
    }

    // for loop
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << "******************************************************" << endl;
    // while loop
    int j = 1;
    while (j <= 10)
    {
        cout << j << endl;
        j++;
    }

    cout << "******************************************************" << endl;
    // do while loop
    int k = 1;
    do
    {
        cout << k << endl;
        k++;
        // k = k + 1  k += 1
    } while (k <= 10);

    // inputting the values
    int x;
    cout << "x chi value de re lavdya " << endl;
    cin >> x;
    cout << "dhar bullya = " << x << endl;

    string str1;
    cout << "item ch naav kay re tuzya  : ";
    cin >> str1;
    cout << "mazya rani che naav aahe = " << str1 << endl;

    8

    

    return 0;
}