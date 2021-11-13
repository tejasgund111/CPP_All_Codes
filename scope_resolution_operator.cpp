//defination of function outside class.
#include<iostream>
using namespace std;
class A{
    public:
    void fun();
};
void A :: fun(){
    cout<<"function is defined here."<<endl;
}
int main(){
    A b;
    b.fun();
    return 0;

}