#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    int* ptr;
    ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    //after ending of loop the value get stored in the pointer is the last value of the array and so if we start decrementing the values of it it starts from the last value of the array
    ptr--;
    cout<<*ptr<<endl;
    ptr--;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr--;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    return 0;
}