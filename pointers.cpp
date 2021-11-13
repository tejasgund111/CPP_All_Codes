#include<iostream>
using namespace std;
int main(){
    int data[]={1,2,3,4};
    int* pointer=data;

    for(int i=0;i<4;i++){
        cout<<pointer[i]<<"  "; //it gives same values as data gives.
    }
    cout<<endl;
    cout<<"................another example:........................."<<endl;
    int b=8;
    int* a;
    a=&b;
    cout<<"value of variable: "<<b<<endl;
    cout<<"value of variable using pointer: "<<*a<<endl;
    cout<<"address of b using pointer: "<<a<<endl;
    cout<<"addressof b using & and variable: "<<&b<<endl;
    // int* p,q;  int this case p is pointer and q is normal variable
    // int* p;    int *p;   both are correct representation  

    return 0;
}