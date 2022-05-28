// sort one array according to other
/*
i/p : a[] = {3,1,2}
      b[] = {'G','E','K'}
o/p : b[] = {'E','K','G'}
*/

#include <iostream>
#include <algorithm>
using namespace std;

void sortChar(int a[], char b[], int n)
{
    pair<int, char> p[n];
    for (int i = 0; i < n; i++)
        p[i] = {a[i], b[i]};
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        cout << p[i].second << " ";
}

int main()
{

    return 0;
}