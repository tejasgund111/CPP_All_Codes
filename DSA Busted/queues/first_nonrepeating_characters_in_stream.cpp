#include<bits/stdc++.h>
using namespace std;

string FirstNonRepeat(string A){
    unordered_map<char,int> count;
    queue<int>q;
    string ans = "";

    for(int i=0;i<A.length();i++){  
        char ch = A[i];

        // increment count
        count[ch]++;

        // queue me push karo
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()] > 1){
                // repeating character
                q.pop();
            }
            else{
                // non repeating character
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }

    return ans;
}

int main(){
    
    return 0;
}