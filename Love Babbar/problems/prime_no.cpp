#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    bool isPrime = 1;  
    for (int i = 2; i < n; i++)
    {
        //remainder = 0 means it is not prime
        if (n % i == 0)
        {
            // cout << "Not a prime no." << endl;
            isPrime = 0;
            break;
        }
        
    }
        if(isPrime == 0){
            cout<<"It is not a prime no."<<endl;
        }
        else{
            cout<<"It is a prime no."<<endl;
        }
    return 0;
}