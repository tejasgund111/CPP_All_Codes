#include <iostream>
using namespace std;
void findBinary(int n)
{
    int arr[32];
    int i = 0;
    while (n > 0)
    {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
}

// string getBinary(int n){
//     string str = "";
//     while(n){
//         int rem = n % 2;
//         if(rem == 1){
//             str += '1';
//         }
//         else {
//             str += '0';
//         }
//         n = n/2;
//     }
//     reverse(str.begin(), str.end());

//     return str;
// }


int main()
{
    int n;
    cout << "Enter your value -> ";
    cin >> n;
    findBinary(n);
    return 0;
}

// this is the program for giving values converted from decimal to binary which are in between 0 to 7