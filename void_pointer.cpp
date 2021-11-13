#include<iostream>
using namespace std;
int main(){
    int a=4;
    void* ptr=&a;
    cout<<"The content of the pointer is: "<<endl;
    // use typecasting to print the content inside the void pointer.
    cout<<*(static_cast<int*>(ptr))<<endl;
    return 0;
    
    
}