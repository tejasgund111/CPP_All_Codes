#include<iostream>
using namespace std;
int global_var=90;
void fun(int *ptr){
    ptr=&global_var;
    cout<<"Value is: "<<*ptr<<endl;
}
int main(){
    int var=10;
    int* ptr_to_var=&var;
    cout<<"Passing pointer to function: "<<endl;
    cout<<"Before: "<<*ptr_to_var<<endl;
    fun(ptr_to_var);
    cout<<"After: "<<*ptr_to_var<<endl;


    
    return 0;
}
//The changes made to the function does not reflects outside the function.
//This is because only a copy of the pointer is passed to the function.
//here we are just modifying the copy of the pointer and original value in the main function remains intact