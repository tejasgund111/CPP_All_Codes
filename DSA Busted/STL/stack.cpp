#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Tejas");
    s.push("Vishnu");
    s.push("Gund");

    cout<<"Top element -> "<<s.top()<<endl;

    s.pop();
    cout<<"Top element -> "<<s.top()<<endl;
    
    cout<<"Size of stack "<<s.size()<<endl;

    cout<<"Empty pr not "<<s.empty()<<endl;
    
    return 0;
}
//stack is performed with last in first out functionality