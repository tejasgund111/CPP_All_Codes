#include <bits/stdc++.h>
using namespace std;

// return the number of elements will occur in the intersection
// output should expect distinct common elements

int intersection(int a[], int b[], int m, int n)
{
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        { // for checking if the element appeared in the previous array or not
            if (a[j] == a[i])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        { // if the element is appeared in the pevious part then the below for loop will not run
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            // for checking if the element appears in the second array
            if (a[i] == b[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}
// O(m*(m+n))  time complexity

// optimized solution
int interSection(int a[], int b[], int m, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]); // it will ignore the repeated elements
    }
    int res = 0;
    for (int j = 0; j < n; j++)
    {
        if (s.find(b[j]) != s.end())
        {
            res++;
            s.erase(b[j]); // this erase is for erasing the element after incrementing the result, because if the element occurred double in array b then it will also increment the res
        }
    }
    return res;
}
// O(m+n)   time complexity
// O(m)   Auxillary space

void giveInterection(int a[], int b[], int m, int n)
{
    unordered_set<int> s;
    unordered_set<int> p;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]); // it will ignore the repeated elements
    }

    for (int j = 0; j < n; j++)
    {
        if (s.find(b[j]) != s.end())
        {
            p.insert(b[j]);
        }
    }

    for (auto it = p.begin(); it != p.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int a[7] = {10, 15, 20, 15, 30, 30, 5};
    int b[4] = {30, 5, 30, 80};
    int arr1[6] = {7, 1, 5, 2, 3, 6};
    int arr2[5] = {3, 8, 6, 20, 7};

    cout << "using naive solution" << endl;
    cout << intersection(a, b, 7, 4) << endl;
    cout << intersection(arr1, arr2, 6, 5) << endl
         << endl;
    cout << "using unordered set" << endl;
    cout << interSection(a, b, 7, 4) << endl;

    cout << "Intersection of the array is ";
    giveInterection(a, b, 7, 4);

    return 0;
}
