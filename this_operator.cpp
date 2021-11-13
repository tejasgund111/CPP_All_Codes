#include<iostream>
using namespace std;
class a{
    int x;
    public:
    a(int x){
     this->x=5;
        cout<<"value of x from class "<<this->x<<endl;
        cout<<"value of x from parameter of constructor "<<x<<endl;
    }

};
int main(){
    a y(1);
    return 0;
}