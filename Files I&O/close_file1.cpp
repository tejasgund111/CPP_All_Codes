#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our file with out stream
    ofstream out("one.txt");
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    out<<name + " is my name.";
    out.close(); //here we close our file and disconnects the connecting link
    //connecting our file with in stream
    ifstream in("one.txt");
    string p;
    in>>p;
    cout<<"The content of the file is the "<<p<<endl;
    
    return 0;
}