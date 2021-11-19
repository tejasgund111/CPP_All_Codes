#include<iostream>
using namespace std;
class A {
  public:
  virtual void display() = 0;
};
class B:public A {
  public:
  void display(){cout<<"this is from class B "<<endl;}
};
class C:public A{
  public: 
  void display(){cout<<"this is from class C"<<endl;}

};
int main(){

  A* a;
  B b;
  C c;
  a=&b;
  a->display();
  a=&c;
  a->display();

  
  return 0;
}