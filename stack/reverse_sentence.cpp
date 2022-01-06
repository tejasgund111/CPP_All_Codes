#include <iostream>
#include <stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

int main()
{
    string s = "Hey, how are you doing?";
    reverseSentence(s);

    return 0;
}

//In this program the output words having the same order
//we are pushing the whole word so the word sequence is the same as before

// when we will get any space then we will store that word in string word and then pushing that word to the stack st and then printing the top

// just by using stack like the analogy last in first out