#include<iostream>
using namespace std;
class abc{
    private:
    int a;
    public:
    void gg(int x){
        a=x;
    }
    friend int func(abc);

};
int func(abc obj){
    // here object is used to invoke the private member of the class
    obj.a=5;
    cout<<"\nhi"<<endl;
    
    return obj.a ;

}
int main(){
    abc obj;
    cout<<func(obj);
   
    return 0;

}
// Always friend function is declared inside the class and defined outside the class