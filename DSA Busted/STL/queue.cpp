#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Tejas");
    q.push("Vishnu");
    q.push("Gund");

    cout<<"First element "<<q.front()<<endl;
    cout<<"Size before pop is "<<q.size()<<endl;
    q.pop();
    cout<<"First element "<<q.front()<<endl;

    cout<<"Size after pop is "<<q.size()<<endl;

    
    return 0;
}
//queue can be performed on first in first out functionality