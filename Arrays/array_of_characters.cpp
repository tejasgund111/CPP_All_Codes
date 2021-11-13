#include <iostream>
using namespace std;
int main() {
    char a[]={'a','b','c'};
    char* ptr;
    ptr=a;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr=&a[0];
    cout<<*ptr<<endl;
    cout<<*(ptr+2)<<endl;
    ptr=&a[2];
    cout<<*ptr<<endl;
    

    return 0;
}