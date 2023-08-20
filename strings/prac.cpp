#include <bits/stdc++.h>
using namespace std;
// bacbac   2  a 
string solve(string &S, int pi, char ci)
{
    for (int i = 0; i < S.length(); i++)
    {
        if(S[i] == ci){
            // cout<< "We got ci at index "<<i<<endl;
            pi--;
            // cout<<"value of p is"<<pi<<endl;
        }
        if (pi == 0)
        {
            // cout<<"We are erasing at index "<<i<<endl;
            S.erase(i, 1);
            break;
        }
    }
    return S;
}

int main()
{
    /* Read input as specified in the question.


     * Print output as specified in the question.
     */

    int k;
    cin >> k;
    string s;
    cin>>s;
    // string S;
    // cin>>S;
    string S="";
    while (k--)
    {

        S += s;
    }

    int n;
    cin >> n;
    // cout<<S<<endl;

    while (n--)
    {
        int pi;
        cin >> pi;
        char ci;
        cin >> ci;
        // cout<< "before " <<S<<endl;
        S = solve(S, pi, ci);
        // cout<< "after " <<S<<endl;
    }

    cout << S << endl;
    // string S = "bacbac";
    // cout<<solve(S, 2, 'a')<<endl;
    // cout<<solve(S, 1, 'b')<<endl;
    // cout<<solve(S, 2, 'c')<<endl;

}

// 2
// bacbac
// 3
// 2 a
// 1 b
// 2 c

// acb

