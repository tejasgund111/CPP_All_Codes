#include<iostream>
using namespace std;

int main(){
  int a=9;
  int &b =a;
  cout<<a<<endl;
  b++;
  cout<<b<<endl;
  cout<<a<<endl;
  b=90;
  cout<<a<<endl;

  
  
  return 0;
}