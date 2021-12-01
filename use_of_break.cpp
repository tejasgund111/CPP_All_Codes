// C++ program to illustrate the use
// of the break statement
#include <iostream>
using namespace std;
  
// Function to illustrate the use
// of break statement
void useOfBreak()
{
    for (int i = 0; i < 40; i++) {
  
        cout << "Value of i: "
             << i << endl;
  
        // If the value of i is
        // equal to 2 terminate
        // the loop
        if (i == 2) {
            break;
        }
    }
}
  
// Driver Code
int main()
{
  
    // Function Call
    useOfBreak();
  
    return 0;
}