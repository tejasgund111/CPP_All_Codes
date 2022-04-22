#include <iostream>
using namespace std;

int main()
{
    char msg[10]; // holds a string of upto 10 characters terminated by '\0'
    cout << "Enter a message (with space ) " << endl;
    cin.getline(msg, 10);
    cout << msg << endl;

    // Access via null terminated character array
    for (int i = 0; msg[i] != '\0'; i++)
    {
        cout << msg[i];
    }
    cout << endl;

    cout << "Enter a word (without space ) " << endl;
    cin >> msg;
    cout << msg << endl;

    // Access via null terminated character array
    for (int i = 0; msg[i] != '\0'; ++i)
    {
        cout << msg;
    }
    cout << endl;

    /*
    
    char message[256]; // holds a string of upto 256 characters terminated by '\0'
    char str1[] = "hello";
    // The length of array is number of characters +1 (for '\0')
    char str1Char[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str2[] = "Hello";
    // length of array is 256 keeping a smaller string of length 5+1 = 6

    */
    return 0;
}