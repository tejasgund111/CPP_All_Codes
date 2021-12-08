#include<iostream>
using namespace std;
void findBinary(int n){
    int rem, i=2;
    int arr[3];  //created array to store the bits

    while(n!=0){
        rem = n % 2;  //remainder
        n = n / 2;    //changing value of n till loop runs

        // cout<<rem<<" ";
        arr[i] = rem;  //remainder value stored in array
        i--;
    // but here we are storing values in arrays from end to start

    }
    

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";  //printing bits stored in array
     }

}
int main(){
    int n;
    cout<<"Enter your value -> ";
    cin>>n;
    findBinary(n);
    return 0;
}

//this is the program for giving values converted from decimal to binary which are in between 0 to 7