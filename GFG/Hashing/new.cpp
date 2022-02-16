#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3] = {1,2,3};
    unordered_set<int>s(arr,arr+3);
    for(auto i:s){
        cout<<i<<endl;
    }
    return 0;
}