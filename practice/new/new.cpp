#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"This is a"<<endl;
    }
    A(int a){
        cout<<"This is  for a"<<a<<endl;
    }

};
int main(){
    // A a();
    A a();
    A b(7);
    
    return 0;
}