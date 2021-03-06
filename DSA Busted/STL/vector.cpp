#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;

    cout << "Size-> " << v.size() << endl;

    cout << "Front " << v.front() << endl;
    cout << "Back " << v.back() << endl;

    cout << "Before pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before clear size " << v.size() << endl;
    v.clear();
    cout << "After clear size " << v.size() << endl;

    vector<int> a(5, 1); // It will initialize all the five elements by 1
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> last(a); // It will copy all the elements in the vector a
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
// It's capacity get doubles when it gets completely filled

// using the vector is usually faster than using the ordinary array