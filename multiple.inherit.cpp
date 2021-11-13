#include <iostream>
using namespace std;

class Car {        // The class
  public:
  int a;
  void disp(){
    cout<<"a="<<a;

  }
};
class bike{        // The class
  public:
  int b;
  void displ(){
    cout<<"b="<<b;

  }
};
class rider: public Car, public bike{
  public:
  int d;
  void displa(){
    cout<<"d="<<d;
  }
  
};
int main(){
  rider tejas;
  tejas.d=5;
  tejas.displa();
  return 0;

}
