#include<iostream>
using namespace std;
class model{
    public:
    int x;
    model(int a){
        x=a;
        cout<<"value of x is "<<x<<endl;
    }
    int get(){
        return x;
    }
};

int main(){
    model obj1(5);
    model obj2=obj1;
    obj2.x;
    obj2.get();
    cout<<obj2.x<<endl;


    return 0;
}
// here in this program we are using the default copy constructor i.e if we explicitly not define the copy constructor then the compiler gives its copy constructor.
