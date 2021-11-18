#include<iostream>
using namespace std;
class name{
    private:
    int a,b;
    public:
    name(int a1,int b1){
        a=a1;
        b=b1;
    }
    // name(name &p1){
    //     a=p1.a;
    //     b=p1.b;
    // }

    int getA(){
        return a;
    }
    int getB(){
        return b;
    }

    ~name(){
        cout<<"destructor..."<<endl;
    }
};
int main(){
    name c1(2,5);
    name c2=c1;
    cout<<"for c1 "<<c1.getA()<<" " <<c1.getB()<<endl;
    cout<<"for c2 "<<c2.getA()<<" " <<c2.getB()<<endl;

    return 0;
}
