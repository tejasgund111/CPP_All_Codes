#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value of row and column as n -> ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= n)
        {
            cout << ch << "  ";

            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}
//values of character or alphabets get incremented by the no. as we are adding to them
//ex.  char ch= 'A' + 2;  cout<<ch;
// above code gives the output C
