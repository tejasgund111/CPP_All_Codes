#include <bits/stdc++.h>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout << name << endl;
    cout << "Length:>>" << getLength(name) << endl;

    return 0;
}
/*
in built functions for character arrays >>>>

1.we can find out the length of the string
int length = strlen(str); 

2.for comparing the two strings we can use strcmp() function it will give 0 if they are not equal
strcmp(str1, str2);

3. for copying one string into another
strcpy(destination_string, source_string)


in built functions for strings >>>>

1.for calculating length>> str.length()
2.


*/


