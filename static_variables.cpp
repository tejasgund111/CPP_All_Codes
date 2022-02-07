#include<iostream>
using namespace std;
void get(){
    static int a=5;
    a++;
    cout<<a<<endl;
}
void set(){
    int a=5;
    a++;
    cout<<a<<endl;
}
int main(){
    get();
    get();
    set();
    set();
    return 0;
}