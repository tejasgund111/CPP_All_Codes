#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int num;
    cout<<"Enter the no. which you want to find in the array => ";
    cin >>num;
    for(int i=0;i<5;i++){
        if(arr[i]==num){
            cout<<"we found."<<endl;
        }
        
    }
    
    return 0;
}