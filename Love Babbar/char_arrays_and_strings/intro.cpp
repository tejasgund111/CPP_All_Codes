#include <iostream>
using namespace std;

// Function for getting length of the character array
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[10];
    cout << "Enter your name ";
    cin >> name;
    // name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;

    cout << "Length: " << getLength(name) << endl;

    return 0;
}

// Limitation of cin -> cin will stop execution if you will give space, tab, newline/enter character

// name[2] = '\0' ;    it will store null character at second index and therefore the values after second index will not be printed