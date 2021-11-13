#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("one.txt"); //for reading the file ifstream is used 
    string s;
    in>>s;   //here it reads the text in the text file and then prints using cout
    cout<<s;  //it prints the text read by the  in>>s;
    return 0;
}