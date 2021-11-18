#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the no. of rows and columns that is value of n : "<<endl;
    cout <<"value of n is ";
    int n;
    cin >> n;
    int i= 1;
    while (i <= n)
    {
        int j= 1;
        while (j <= n)
        {
            cout<<"*"<<" ";
            j++;
            
        }
        cout<<endl;
        i++;
    }
    return 0;
}