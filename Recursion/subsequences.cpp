#include <iostream>
#include <vector>
using namespace std;
void solve(string str, string output, int index, vector<string> &ans)
{
    // base case
    if (index >= str.length())
    {
        // if (output.length() > 0)
        // {
            //this is for when you don't need the empty subsequence
        //     ans.push_back(output);
        // }
        ans.push_back(output);
        return;
    }
    // exclude
    solve(str, output, index + 1, ans);

    // include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

void subsequences(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);

    //display
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}

int main()
{
    string str = "abc";
    subsequences(str);


    return 0;
}