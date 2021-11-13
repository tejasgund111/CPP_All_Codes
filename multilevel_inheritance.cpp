#include <iostream>
using namespace std;
class son
{
public:
    int a;
    void none()
    {
        cout << "there is nothing in the member function" << endl
             << "you are wasting your time" << endl;
    }
};
class father : public son
{
public:
    //it is derived from class son
};

class grandfather : public father
{
public:
    //it is derived from class father
};

int main()
{
    grandfather obj;
    obj.none();
    obj.a = 5;
    cout << obj.a << endl;

    return 0;
}
