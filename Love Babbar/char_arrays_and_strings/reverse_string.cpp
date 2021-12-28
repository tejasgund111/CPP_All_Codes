#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
        // s++;
        // e--;
    }
}

// we can also use this function for getting the length of the string
//  Function for getting length of the character array
//  int getLength(char name[])
//  {
//      int count = 0;
//      for (int i = 0; name[i] != 0; i++)
//      {
//          count++;
//      }
//      return count;
//  }

int main()
{
    char ch[5];
    cout << "Give string of size 5 ";
    cin >> ch;
    reverse(ch, 5);

    cout << "Reversed string is " << ch << endl;

    return 0;
}