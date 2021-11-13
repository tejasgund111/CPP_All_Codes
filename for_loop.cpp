#include<iostream>
using namespace std;
void loop(){
    cout<<"write the values less than 6 from zero in ascending order "<<endl;
    for(int i=0;i<=6;i++){
        cout<<i<<endl;
    }
}
int main(){
    loop();
    cout<<"write the values less than 6 from in decending order "<<endl;
    for(int i=6;i>=0;--i){
        cout<<i<<endl;
    }
    return 0;
}
