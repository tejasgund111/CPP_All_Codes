#include <iostream>
using namespace std;
template <typename T>
void max(T a[], int n)
{

    T m = a[0];
    for (int i = 0; i < n; i++)
    {
        if (m < a[i])
        {
            m = a[i];
        }
    }
    cout << "Largest no. is " << m << endl;
}

template <typename T>
void min(T a[], int n)
{

    T m = a[0];
    for (int i = 0; i < n; i++)
    {
        if (m > a[i])
        {
            m = a[i];
        }
    }
    cout << "Smallest no. is " << m << endl;
}

int main()
{
    int n;
    cout << "How many values you want to enter ";
    cin >> n;
    cout << "Enter your numbers " << endl;
    int x[10];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    max<int>(x, n);
    min<int>(x, n);

    return 0;
}