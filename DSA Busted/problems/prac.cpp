#include<bits/stdc++.h>
using namespace std;

int decimal(int n){
    int i = 0;
    int ans = 0;
    while(n){
        int digit = n % 10;
        if(digit == 1){
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }
    return ans;
}

string binaryy(int n){
    string str = "";

    while(n){
        int digit = n % 2;
        if(digit == 1){
            str += '1';
        }
        if(digit == 0){
            str += '0';
        }
        n = n/2;
    }

    reverse(str.begin(), str.end());
    return str;
}

int main(){
    cout << binaryy(3);
    return 0;
}