#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int t = 0;
    int st = 0;
    float avgwt = 0;
    float avgtat = 0;
    int pid[5] = {1, 2, 3, 4, 5};//process id
    int at[5] = {0, 0, 6, 11, 12};// arrival time
    int bt[5] = {4, 3, 7, 4, 2};// burst time
    
    vector<int> f(n);
    vector<int> ct(n);
    vector<int> tat(n);
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
            tat[c] = ct[c] - at[c];
            wt[c] = tat[c] - bt[c];
            f[c] = 1;
            t++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        avgwt += wt[j];
        avgtat += tat[j];
    }
    avgwt /= n;
    avgtat /= n;
    cout << "\n\tprocess\tAT\tBT\tWT" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << pid[i] << "\t" << at[i] << "\t" << bt[i] << "\t" << wt[i] << endl;
    }
    cout << "\nAverage waiting time is: " << avgwt << endl;
    cout << "Average turnaround time is: " << avgtat << endl;

    return 0;
}