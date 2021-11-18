#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the even number upto which you want to calculate the sum : ";
    int num;
    cin >> num;

    int sum = 0;

    int n = 2;
    while (n <= num)
    {
        sum += n;
        n += 2;
    }

    cout << "value of sum is : " << sum << endl;

    return 0;
}
