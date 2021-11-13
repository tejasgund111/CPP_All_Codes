#include <iostream>
using namespace std;
int main()
{
    int a[2][3] = {
        {4, 5, 6},
        {8, 2, 1}
        };

    cout << "the values are as below:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " " << flush;
        }
        cout << endl;
        //it gives the new line after completion of the first row
    }

    return 0;
}
// the pattern of executing like this first the first row will be printed and then it will go toward the second row
// first take i=0 then move for j, it take j=0,1,2 etc. 
// then take i=1 then move for j, it take j=0,1,2 etc.