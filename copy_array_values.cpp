#include<iostream>
using namespace std;

int main(){
    int first[5]={1,2,3,4,5};
    int second[5];
    //for copying following method is used
    for(int i=0;i<5;i++){
        second[i]=first[i];
    }
    cout<<"copied array is "<<endl;
    for(int i=0;i<5;i++){
        cout<<second[i]<<" ";
    }

    return 0;
}
