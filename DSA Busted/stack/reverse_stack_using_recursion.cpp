#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    
    int n = s.top();
    s.pop();
    
    // recursive call
    insertAtBottom(s, x);
    
    s.push(n);
    
}

void reverseStack(stack<int>& s){
    if(s.empty()){
        return ;
    }
    
    int num = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, num);
}

int main(){
    
    return 0;
}