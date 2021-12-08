#include <iostream>
using namespace std;
void printSpell(int n, string str[])
{
    if (n == 0)
    {
        return;
    }

    printSpell(n / 10, str);
    cout << str[n % 10]<<" ";
}
int main()
{
    int n;
    cout << "Enter your input -> ";
    cin >> n;
    string str[10] = {"Zero", "One", "Two", "Three", "Four", "Six", "Seven", "Eight", "Nine"};

    cout << "Answer is : ";
    printSpell(n, str);
    return 0;
}