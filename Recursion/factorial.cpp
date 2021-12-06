#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    cout<<"It will give the factorial..."<<endl;
    cout<<fact(4)<<endl;
    return 0;
}