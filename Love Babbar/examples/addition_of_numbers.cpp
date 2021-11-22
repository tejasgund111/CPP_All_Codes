#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your no . ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    cout << "Sum is : " << sum << endl;
    return 0;
}
