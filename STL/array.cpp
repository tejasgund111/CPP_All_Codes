#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 5> a = {1, 2, 3, 4, 5};
    cout << "first element f the array ->" << a.front() << endl;
    cout << "last element of the array->" << a.back() << endl;
    cout << "Is the array empty or not->" << a.empty() << endl;
    cout << "size of the array->" << a.size() << endl;
    cout << "Element at second position is the->" << a.at(1) << endl;
    cout << "Here are the all elements of the array->" << endl;
    int s = a.size();

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << "We can write the copy of an array by using this way " << endl;
    array<int, 5> b(a);
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl
         << "Also see the below example " << endl;

    return 0;
}