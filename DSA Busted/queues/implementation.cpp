#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);

    cout<<"Size of the queue is "<<q.size()<<endl;
    cout<<"Front of the queue is "<<q.front()<<endl;
    q.pop();
    cout<<"Front of the queue is "<<q.front()<<endl;

    cout<<"Size of the queue is "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Empty queue"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    return 0;
}