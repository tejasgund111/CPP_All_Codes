// C++ program to extract words from
// a string using stringstream
#include<bits/stdc++.h>
using namespace std;

void printWords(string str)
{
	// word variable to store word
	string word;
    stringstream iss(str);
    while(iss >> word){
        cout << word<< endl;
    }
}

// Driver code
int main()
{
	string s = "sky is blue";
	printWords(s);
	return 0;
}
