#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1]= "Tejas";
    m[2]= "Rohan";
    m.insert({5, "Bheem"});
    m[3]= "Arjun";

    cout<<"Before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 3 ->"<<m.count(13)<<endl;
    cout<<"Finding 7 ->"<<m.count(7)<<endl;


    cout<<"After erase "<<endl;
    m.erase(3);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    

    return 0;
}