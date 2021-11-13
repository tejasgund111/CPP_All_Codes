#include<iostream>
using namespace std;
int add(int a,int b){
    int c;
    c=a+b;
    return c;

}
int sub(int a,int b){
    int c;
    c=a-b;
    return c;
}
int main(){
    int a=8,b=5,c;
    c=add(a,b);
    cout<<"add: "<<c<<endl;
    c=sub(a,b);
    cout<<"sub: "<<c<<endl;
    return 0;

}
