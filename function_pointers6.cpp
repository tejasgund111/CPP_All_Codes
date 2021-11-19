//The function pointer can be passed as parameter to another function

#include<iostream>
using namespace std;
void func1(){
    cout<<"func1 is called .."<<endl;
}

void func2(void (*funcPtr)()){
    funcPtr();
}

int main(){
    func2(func1);
    // func2(*func1); //gives the same result
    
    return 0;
}

// In the above code, the func2() function takes the function pointer as a parameter. The main() method calls the func2() function in which the address of func1() is passed. In this way, the func2() function is calling the func1() indirectly.