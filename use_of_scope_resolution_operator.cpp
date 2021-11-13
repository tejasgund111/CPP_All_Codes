// use of the scope resolution operator
#include <iostream>
using namespace std;
class ab{
    static int a;
    public:
    static int b;
    void disp(int a);
};
// her we give the value to a which is static integer
int ab::a=5;
int ab::b=2;
// here we defined the disp function outside the class
void ab::disp(int a){
    cout<<"static variable a:"<<ab::a<<endl;
    
    cout<<"parameter passed to disp a is "<< a<<endl;
}

int main(){
    ab ab1;
    
    ab1.disp(2);
    cout<<"value of b is: "<<ab::b<<endl;
    return 0;
}
