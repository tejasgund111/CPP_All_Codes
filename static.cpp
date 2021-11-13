#include<iostream>
using namespace std;
class copy{
    static int a;
    int b;
    public:
    void fun(){
        b=5;
        cout<<"b is:"<<b<<endl;
    }
    static void fun1(){
        
        cout<<"a is :"<<a<<endl;
    }
}x,y;      //objects are defined here instead of below.
int copy ::a=8;
int main(){
    
    x.fun();
    copy::fun1();
    y.fun();
    y.fun1();
    return 0;
   

}