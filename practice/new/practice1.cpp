#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 0;
    else
    cout<<n<<" ";
    return fact(n-1);
}
int main(){
    fact(7);
    return 0;
}