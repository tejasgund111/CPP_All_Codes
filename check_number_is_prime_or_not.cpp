#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number you want to check : ";
    int n;
    cin >> n;

    int num = 2; //starting point
    while (num < n)
    {
        if (n % num == 0)
        {
            cout << " Not prime for " << num << endl;
            // break;
        }
        else
        {
            cout << "Prime for " << num << endl;
            // break;
        }
        num = num + 1;
    }

    return 0;
}