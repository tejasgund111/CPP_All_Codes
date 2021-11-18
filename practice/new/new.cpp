#include<iostream>
using namespace std;
class name{
    
    public:
    static int b;
    static void fun(int a){
        cout <<"value of a is : "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }

    
};
int name:: b=8;
int main(){
    name::fun(7);
    return 0;
}
