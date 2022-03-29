#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    
    int n = s.top();
    s.pop();
    
    // recursive call
    solve(s, x);
    
    s.push(n);
    
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack, x);
    
    return myStack;
}

int main(){
    
    
    return 0;
}

