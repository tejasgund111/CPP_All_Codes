#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("one.txt");
    string s="This is the new text........";
    
    out<<s;
    out.close();  //here we disconnects our file
    
    return 0;
}