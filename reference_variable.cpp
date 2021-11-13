//it is written as int a=100;
//                 int &b=a;
//it is mmainly used in parameter passing in functions.

#include<iostream>
using namespace std;
void function(int & a);
int main()
{
    int b=5;
    cout<<"value of b is: "<<b<<endl;
    function(b);
    cout<<"modified value is : "<<b<<endl;
    return 0;


}
void function(int & a){
    cout<<"In function"<<endl;
    cout<<"value of variable :"<<a<<endl;
    a=6;
    cout<<"new value is :"<<a<<endl;
}