#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outfile("" test.txt"");
    for (int n = 0; n < 100; n++)
    {
        outfile << n;
    }
    outfile.close();
    return 0;
}