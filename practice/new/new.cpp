#include <iostream>
using namespace std;
class name
{
  int b;

public:
  friend void fun1(name);
};
void fun1(name c)
{
  int t=c.b;
  t = 90;
  cout << "value of b is " << t << endl;
}
int main()
{
  name obj;

  fun1(obj);
  return 0;
}
