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

        while (j <= n)
        {
            char start = 'A' + i + j - 2;
            cout << start << "  ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
