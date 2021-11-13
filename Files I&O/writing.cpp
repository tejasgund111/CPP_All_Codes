#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s="Hi, hello how are you!!";
    ofstream out("one.txt");   
    //using constructor and object
    out<<s;
    
    return 0;
}