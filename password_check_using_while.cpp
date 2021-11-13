#include<iostream>
using namespace std;
int main(){
    const string pass="Tejas";
    string value;
    do{
        cout<<"Enter password: >"<<flush;
        cin>>value;
        if(value==pass){
            break;
        }
        else{
            cout<<"access denied."<<endl;
        }
    }
    while(true);
    cout<<"password accepted."<<endl;
    return 0;

   

}
