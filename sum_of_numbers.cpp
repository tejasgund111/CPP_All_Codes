#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number upto which you want to print the sum of numbers" << endl;
    cin >> num;

    int sum = 0;

    int i = 1;
    while (i <= num)
    {
        sum += i;
        i++;
    }

    cout << "Value of sum is : " << sum << endl;
    return 0;
}
