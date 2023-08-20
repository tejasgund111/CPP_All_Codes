// remove occurrences of a substring from the string
#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<<"String after removing:: "<<removeOccurrences(s, part)<<endl;
    return 0;
}