#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();
    cout<<"After pop_front"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    cout<<"After pop_back"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Print first index element "<<d.at(1)<<endl;
    cout<<"Front"<<d.front()<<endl;
    cout<<"Back"<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}

//In case of deque we can perform insertion and deletion at both the ends 