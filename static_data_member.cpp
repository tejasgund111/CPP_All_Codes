#include<iostream>
using namespace std;
class A{
    static int a;
    public:
    static int b;
    void fun(int a)
    {
        cout<<"a from fun is: "<<a<<endl;
        cout<<"private a is:"<<A::a<<endl;

    }
};
int A :: a=5;
int A :: b=6;
int main(){
    A x;
    x.fun(5);
    
    cout<<A::b<<endl;
    return 0;

}