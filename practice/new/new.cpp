#include <iostream>
using namespace std;

int main()
{
  char ch;
  cin >> ch;
  if (isupper(ch))
  {
    cout << "It is uppercase letter";
  }
  else if (islower(ch))
  {
    cout << "It is lowercase letter";
  }
  else if (isdigit(ch))
  {
    cout << "This is a digit";
  }

  return 0;
}