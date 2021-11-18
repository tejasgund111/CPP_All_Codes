#include<iostream>
using namespace std;
class A {
  public:
  void display(){cout<<"this is from class A"<<endl;}
};
class B {
  public:
  void display(){cout<<"this is from class B "<<endl;}
};
class C:public A,public B{
  public: 
  void derived(){cout<<"this is from class C"<<endl;}

};
int main(){
  C obj;
  obj.A::display();
  obj.B::display();
  obj.derived();

  
  return 0;
}