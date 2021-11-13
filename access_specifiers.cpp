#include<iostream>
using namespace std;

class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;     //here we are giving value to the private data member salary in child class
      cout<<salary<<endl;
    }
    
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  myObj.setSalary(50);
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}