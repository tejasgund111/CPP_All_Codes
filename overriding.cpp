#include<iostream>
using namespace std;
class base{
    public:
    void print(){
        cout<<"base class accessed."<<endl;

    }
};
class derived:public base{
    public:
    void print(){
        cout<<"derived class accessed."<<endl;

    }
};

int main(){
    derived obj1,obj2;
    obj1.print();
    obj1.base::print();
    obj2.print();        //it is access the function of the derived class
    obj2.base::print();  //it access the function of the base class

    return 0;
}