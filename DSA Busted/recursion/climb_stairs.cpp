#include<iostream>
using namespace std;

int countStairs(int n){
    if(n==0){
        return  1;
    }
    if(n<0){
        return  0;
    }


    return countStairs(n-1) + countStairs(n-2);  //it means we are climbing one step or two steps
}

int main(){
    int n;
    cout<<"Enter to which stair do you want to climb -> ";
    cin>>n;
    cout<<"There will be "<<countStairs(n) <<" ways "<<endl;

    return 0;
}

// In this problem we are going to stair at nth position 
//we can either go by climbing one step or two step
//Then count the total number of ways by which we can go to the nth stair