#include<iostream>
using namespace std;
class vehicle{
    public:
    string model="mustang";
    int a=5;
    void owner(){
        cout<<"i will give a car"<<endl;
    }
};
//car is the child class....and vehicle is the base class

class car : public vehicle{
    public:
    string runner="racer";

};

int main(){
    car myone;
    myone.owner();
    cout<<myone.model<<" "<<myone.runner<<" "<<myone.a<<endl;
    return 0;

}