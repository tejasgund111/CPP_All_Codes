#include<iostream>
#define max 100
using namespace std;
int main()
{
    const int a=20;
    cout<<"constant using const:"<<a<<endl;
    cout<<"constant using #define :"<<max<<endl;
    
    //we can also define the constant inside the main function by this way
    #define max1 10     // ' ; ' is not used after declaration of constant using the #define
    cout<<"value of max1 is "<<max1<<endl;
    
   
    return 0;
}