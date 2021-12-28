#include <string>
#include <iostream>
using namespace std;

string removeOccurrences(string &s, string &part)
{

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    string big = "abcbcdbccb";
    string small = "cdb";

    removeOccurrences(big, small);
    cout<<"Remained string is -> "<<big<<endl;

    return 0;
}

// explore cpp reference site on web 
// There you will get more information about all the string functions which are used in the program and also explore more functions