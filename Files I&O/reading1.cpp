#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("one.txt");
    string s;
    getline(in,s);  //getline reads the whole line
    cout<<s<<endl;
    
    return 0;
}