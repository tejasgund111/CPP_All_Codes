#include <iostream>
using namespace std;
class employee
{
    int id;

public:
    void setid()
    {
        cout << "enter the id : " << endl;
        cin >> id;
    }
    void getid()
    {
        cout << "your entered id is :" << id << endl;
    }
};
int main()
{  //this is the better way for the multiple objects
    employee fb[3];
    for (int i = 0; i < 3; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    // by this way we can do the same operation and also can get the same output as above.
    // employee aa,bb,cc;
    // cc.setid();
    // cc.getid();
    // aa.setid();
    // aa.getid();
    // bb.setid();
    // bb.getid();


    return 0;
}
