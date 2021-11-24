#include<iostream>
using namespace std;
void set(int &a, int &b){
    int t=a;
    a=b;
    b=t;
}
int main(){
    int a=8;
    int b=9;
    cout<<a<<"  "<<b<<endl;
    set(a,b);
    cout<<a<<"  "<<b<<endl;

    return 0;
}