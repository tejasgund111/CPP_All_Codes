#include<iostream>
using namespace std;
void func(){
    cout<<"this is void function"<<endl;

}
int func(int a){
    cout<<"this is int func "<<a<<endl;

}
int func(int a, int b){
    cout<<"this contain two parameters: "<<a<<" , "<<b<<endl;
}
double func(double b){
    cout<<"this is int func  "<<b<<endl;
}
int main(){
    func();
    func(5);
    func(2,3);
    func(2.55);
    cout<<"End of program."<<endl;

    return 0;

}
//this type contains same name of functions.
//this may contain different parameters.
//also contain different datatypes.
