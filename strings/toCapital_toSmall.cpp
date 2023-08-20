#include <bits/stdc++.h>
using namespace std;
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

char toUpperCase(char ch){
    if(ch >= 'A' && ch <= 'Z')
        return ch;
    else{
        char temp = ch - 'a' + 'A';
        return temp;
    }
}

int main()
{
    cout << toLowerCase('a') << endl;
    cout << toUpperCase('a') << endl;
    return 0;
}