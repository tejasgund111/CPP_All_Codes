#include <iostream>
using namespace std;
class a{
    public:
    void fun(){
        cout<<"hello"<<endl;
    }
};
class b: public a{
    public:
    void fun(){
        cout<<"hi"<<endl;
    }
};

int main() {
    a a1;
    b b1;
    a1.fun();
    b1.fun();
    b1.a::fun();
    a1.a::fun();
    
   

    return 0;
}