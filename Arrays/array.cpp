#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
//when the array is not completely filled then it takes the remaining values as zero
//as the above array will prints ==> 1 2 3 0 0