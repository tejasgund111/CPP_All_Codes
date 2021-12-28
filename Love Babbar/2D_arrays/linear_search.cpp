#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int key;
    cout<<"Enter your key -> ";
    cin>>key;

    if(isPresent(arr, key, 3, 3)){
        cout<<"Target is present"<<endl;
    }
    else{
        cout<<"Target is not present"<<endl;
    }

    return 0;
}