#include<iostream>
using namespace std;

void reachHome(int src, int home){
    cout<<"src -> "<<src<<" home -> "<<home<<endl;

    if(src==home){
        cout<<"Home aa gaya bhai"<<endl;
        return ;
    }
    src++;
    reachHome(src, home);
}

int main(){
    int src = 1, home = 10;
    reachHome(src, home);

    return 0;
}