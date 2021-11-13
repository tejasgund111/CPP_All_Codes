#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in;
    string s;
    //opening the text file into in
    in.open("one.txt");
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof() == 0)
    {
        //using getline function to read the whole line in s
        getline(in, s);
        cout << s << endl;
    }

    return 0;
}