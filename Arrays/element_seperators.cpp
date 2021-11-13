#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(i>0){
            cout<<"|";
        }
        cout<<arr[i];
    }

    return 0;
}