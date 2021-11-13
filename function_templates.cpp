#include <iostream>
using namespace std;
template <class T1, class T2>
void fun(T1 a, T2 b)
{
    cout << "value of a is " << a << endl
         << "value of b is " << b << endl;
}
int main()
{
    fun(2, 3);
    fun(28, 'g');
    fun('a', 'k');
    fun(2.2, 2.3);
    // all the upper ways also give us the correct output
    fun<int, char>(5, 'a'); // but we want this functon calling with function template
    // we can pass all our values by all the above ways

    return 0;
}