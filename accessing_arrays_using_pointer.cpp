#include <iostream>
using namespace std;

int main()
{
    int m[4] = {1, 5, 4, 8};
    int *a = m;

    for (int i = 0; i < 4; i++)
    {
        cout << *a << endl; //same thing can be done by cout<<a[i]<<endl;
        a++;                //point to the next element
    }
    cout << "_____________________________________________" << endl;
    a = m; //similar to a=&m[0];
    // a=&m[0];
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl; //same thing can be done by cout<<a[i]<<endl;
    }
    return 0;
}
