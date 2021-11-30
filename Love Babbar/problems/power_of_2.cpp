#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, num;
    cout << "Enter the no. : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        num = 2 * i;
        if(n == pow(2,i)){
            cout<<"It is "<< i <<"th power of 2"<<endl;
        }
        
        if (n == num)
        {
            cout << "It is 2 multiply by "<<i<<endl;
        }
        
    }
    return 0;
}