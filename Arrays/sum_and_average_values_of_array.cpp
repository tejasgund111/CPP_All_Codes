#include<iostream>
using namespace std;

int main(){
    int size=5;
    int a[size]={1,2,3,4,5};
    double value=0;
    for(int i=0;i<size;i++){
        value=value+a[i];
    }
    cout<<"Addition of elements in the array is "<<value<<endl;
    double average=value/size;
    cout<<"Average is "<<average<<endl;

    return 0;
}