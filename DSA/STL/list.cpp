#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    list<int> lewList(l);  //here we can copy the list into another list
    list<int>another(5,1);  //this list contains 5 elements and they are initialized with 1
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list "<<l.size();

    return 0;
}