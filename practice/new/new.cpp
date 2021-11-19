#include<iostream>
using namespace std;

int main(){
  int a =8;
  int *b;
  b=&a;
  cout<<"Adress of main function "<<main<<endl;
  cout <<"value of a is "<< *b<<endl;

  return 0;
}