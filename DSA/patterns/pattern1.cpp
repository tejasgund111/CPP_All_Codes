#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value of row and colume as n -> ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << "  ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}