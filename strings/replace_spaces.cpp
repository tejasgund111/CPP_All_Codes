#include <bits/stdc++.h>
using namespace std;
// we are replacing the white spaces by @40
string replaceSpaces(string str)
{
    // Write your code here.
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

string replaceTheSpaces(string &input)
{
    string rep = "%20";
    for(int i=0 ; i<input.length() ; i++)
    {
        if(input[i] == ' ')
            input.replace(i,1,rep);
    }
    
	return input;
}
// str1.replace(position,length,str2);  
// Position : The position defines the starting position of the substring of str1.
// length: The number of characters starting from the position to be replaced by another string.
// str2: str2 is the string that will replace the substring of string str1.

int main()
{
    string input = "coding ninjas is a coding platform";
    cout<<replaceTheSpaces(input)<<endl;

    return 0;
}