#include <iostream>
using namespace std;
class parent
{
public:
    virtual void first()
    {
        cout << "1.this is the first function from parent class" << endl;
    }
    virtual void second()
    {
        cout << "2.this is second function in the parent class" << endl;
    }
};
class child : public parent
{
public:
    void first()
    {
        cout << "1.this is the first function from the child class" << endl;
    }
    void second(){
        cout << "2.this is the second function from the child class" << endl;

    }
};
int main()
{
    parent pa;
    parent *par;
    child chi;
    par = &chi; //by this way we are accessing the child class
    par->first();
    par->second();
    par = &pa; //by this way we are accessing the parent class
    par->first();
    par=&chi;
    par->second();

    return 0;
}
// which class function we want to access , store its address into the pointer object.
// also we can give different pointer objects for the base and the derived classes
// eg. for the above example
// parent pa;
// child chi;
// parent* par1=&pa;    this is for parent class
// parent* par2=&chi;   this is for child class