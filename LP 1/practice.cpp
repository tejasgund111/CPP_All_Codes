#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int t = 0;
    int st = 0;
    float avgwt = 0;
    float avgta = 0;

    int pid[5] = {1, 2, 3, 4, 5};
    int at[5] = {2, 1, 4, 0, 2};
    int bt[5] = {1, 5, 1, 6, 3};

    vector<int> f(n);
    vector<int> ct(n);
    vector<int> ta(n);
    vector<int> wt(n);

    for (int i = 0; i < n; i++)
        f[i] = 0;

    while (true)
    {
        int c = n, min = 999;
        if (t == n)
            break;
        for (int i = 0; i < n; i++)
        {
            if ((at[i] <= st) && (f[i] == 0) && (bt[i] < min))
            {
                min = bt[i];
                c = i;
            }
        }
        if (c == n)
            st++;
        else
        {
            ct[c] = st + bt[c];
            st += bt[c];
            ta[c] = ct[c] - at[c];
            wt[c] = ta[c] -bt[c];
            f[c] = 1;
            t++;
        }
    }
    for(int j =0;j<n;j++){
        avgwt += wt[j];
        avgta += ta[j];
    }
    cout << "\nAverage waiting time is: " << avgwt << endl;
    cout << "Average turnaround time is: " << avgta << endl;

    return 0;
}