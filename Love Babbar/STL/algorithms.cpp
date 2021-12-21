#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v; 

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6 -> "<<binary_search(v.begin(),v.end(), 6)<<endl;

    cout<<"Lower bound -> "<<lower_bound(v.begin(),v.end(), 6) - v.begin()<<endl;

    cout<<"Upper bound -> "<<upper_bound(v.begin(),v.end(), 4) - v.begin()<<endl;

    int a = 5;
    int b = 7;
    cout<<"Max -> "<<max(a,b)<<endl;
    cout<<"Min -> "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a -> "<<a<<" b -> "<<b<<endl;

    string str = "abcd";
    reverse(str.begin(),str.end());
    cout<<"String -> "<<str<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    cout<<"After sort "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}