#include <iostream>  
  
using namespace std;  
  
class A  
{  
    int x =5;  
    friend class B;           // friend class.  Here B is declared as friend of A
};  
class B  
{  
  public:  
    void display(A& m)  //using reference operator
    {  
        cout<<"value of x is : "<<m.x;  
    }  
};  
int main()  
{  
    A a;  
    B b;  
    b.display(a);  
    return 0;  
}  