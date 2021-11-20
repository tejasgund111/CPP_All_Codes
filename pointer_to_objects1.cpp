#include <iostream>
using namespace std;
class name
{
private:
    int a;

public:
    void disp(int b)
    {
        a = b;
        cout << "value of a is " << a << endl;
    }
};
int main()
{
    name n;
    name *m;
    m = &n;
    m->disp(8);

    return 0;
}