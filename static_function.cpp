#include <iostream>
using namespace std;
class A{
    static int a;
    int b;
    public:
    static void get(int c) {
        cout<<"vlaue of a is "<<a<<endl;
        cout<<"value of c is "<<c<<endl;
    }
    void set()
    {
        b=6;
        cout<<"value of b is "<<b<<endl;
    }
};
int A::a=3;
int main() {
    A d;
    A::get(8);
    d.set();
    return 0;
}