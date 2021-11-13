#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //declaring an object if type ofstream
    ofstream out;
    //connecting the object to the text file using member function open()
    out.open("one.txt");
    //writing to the text file
    out<<"This is the first line."<<endl;
    out<<"This is the second line.";
    //closing the connection
    out.close();
    
    return 0;
}