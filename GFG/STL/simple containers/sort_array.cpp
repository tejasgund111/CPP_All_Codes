/*
sort one array according to other :
i/p : a[] = {3,1,2}
      b[] = {'G','E','K'}
o/p : b[] = {'E','K','G'}

It will sort according to the first values of the pairs, as the first values points to the some characters values
*/

#include <iostream>
#include <algorithm>
using namespace std;

void sortChar(int a[], char b[], int n)
{
    pair<int, char> p[n];
    for (int i = 0; i < n; i++)
        p[i] = {a[i], b[i]};
    sort(p, p + n);
    for (int i = 0; i < n; i++)
        cout << p[i].second << " ";
}

int main()
{
    int a[] = {3, 1, 2};
    char b[] = {'G', 'E', 'K'};
    int n = 3;

    sortChar(a, b, n);

    return 0;
}