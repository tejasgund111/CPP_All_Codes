#include<iostream>
using namespace std;
class hero{
    public:
    int data;
    char ch;
    hero(){
        cout<<"Constructor called"<<endl;
    }
    ~hero(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    // static
    hero Tejas;

    // dynamic
    hero *b = new hero();
    // manual destructor call
    delete b;

    return 0;
}