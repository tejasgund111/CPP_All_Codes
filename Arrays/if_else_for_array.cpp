#include <iostream>
using namespace std;

int main()
{
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    if (1 <= n && n<= 9)
    {
        cout << arr[n - 1] << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }

    return 0;
}