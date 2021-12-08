#include <iostream>
using namespace std;
void getCount(int n)
{
    // base condition
    if (n == 0)
    {
        return;
    }

    // cout << n << endl;
    // getCount(n - 1); // recursive call
    // //by this way we will get the counting in decending order because we have printed the element first and then have the recursive call

    getCount(n - 1); // recursive call
    cout << n << endl;
    // by this way we will get the counting in ascending order because we have the recursive call first and then printed the element
    
}
int main()
{
    int n;
    cout << "Please Enter input -> ";
    cin >> n;
    cout << "Counting..." << endl;
    getCount(n);
    return 0;
}