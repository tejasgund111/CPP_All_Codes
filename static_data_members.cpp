#include<iostream>
using namespace std;
class abc{
    static int a;
    public:
    void get(){
        a++;
        cout<<"value of a "<<a<<endl; 
    };

};
int abc::a;

int main(){
    abc obj1;
    obj1.get();
    abc obj2;
    obj2.get();
    abc obj3;
    obj3.get();
    
    return 0;
}
//program shows value of a get incremented as only one copy of static data member get stored and it get used again when we create objects of the class.