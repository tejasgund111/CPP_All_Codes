#include<iostream>
using namespace std;
class name{
    
    public:
    static void fun(int a){
        cout <<"value of a is : "<<a<<endl;
    }

    
};
int main(){
    name::fun(7);
    return 0;
}
