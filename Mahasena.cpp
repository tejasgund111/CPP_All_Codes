#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even>odd){
        cout<<"READY FOR BATTLE"<<endl;
    }
    if(even==odd || odd>even){
        cout<<"NOT READY"<<endl;
    }

    return 0;
}