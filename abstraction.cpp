#include<iostream>
using namespace std;
class abstraction{
    private:
    double a,b;
    public:
    void set(double x, double y){
        a=x;
        b=y;


    }
    void get(){
        cout<<"x="<<a<<"\ny="<<b<<endl;

    }
};
int main(){
    abstraction obj;
    obj.set(3.3,2.3);
    obj.get();
    return 0;

}