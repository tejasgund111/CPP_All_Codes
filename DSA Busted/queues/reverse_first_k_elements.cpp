#include<bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int>q, int k){
    // step 1: pop first k from Q and put in the stack
    stack<int>s;

    for(int i=0;i<k;i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }

    // step 2: fetch from stack and push into Q
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }

    // step 3: fetch first (n-k) element from Q ans push_back

    int t = q.size()-k;

    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q;

}

int main(){
    
    return 0;
}