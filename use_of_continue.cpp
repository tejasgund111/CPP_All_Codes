// C++ program to illustrate the
// use of the continue statement
  
#include <iostream>
using namespace std;
  
// Function to illustrate the use
// of continue statement
void useOfContinue()
{
    for (int i = 0; i < 5; i++) {
  
        // If the value of i is the
        // same as 2 it will terminate
        // only the current iteration
        if (i == 2) {
            continue;
        }
  
        cout << "The Value of i: "
             << i << endl;
    }
}
  
// Driver Code
int main()
{
    // Function Call
    useOfContinue();
  
    return 0;
}