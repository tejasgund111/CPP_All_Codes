#include <iostream>
using namespace std;

int getSum(int arr[], int n, int key)
{
    if (n == 0)
    {
        return 0;
    }
    if (arr[0] == key)
    { // checking the first element in array
        return 1;
    }
    else
    {
        int remainingPart = getSum(arr + 1, n - 1, key); // checking the remaining array
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int n = 5, key = 4;
    
    int ans = getSum(arr, 5, key);
    
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    return 0;
}