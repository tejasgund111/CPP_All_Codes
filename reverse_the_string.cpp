#include <iostream>
using namespace std;
 
// Function to reverse a string
void reverse()
{string str1="Hello how are you";
   for (int i=str1.length()-1; i>=0; i--)
      cout << str1[i];
}
 
// Driver code
int main(void)
{
    
    reverse();
    return (0);
}