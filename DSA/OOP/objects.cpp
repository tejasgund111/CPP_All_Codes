#include <iostream>
using namespace std;
class hero
{
public:
    int data;
    char ch;
};

int main()
{
    hero h; // static allocation of the object h

    // dynamic allocation
    hero *b = new hero; // same like integers and others
    (*b).data = 4;
    b->ch = 'A';
    cout << "Data is " << (*b).data << endl;
    cout << "Data is " << (b)->data << endl; // both the ways will give the same output
    cout<<"Character is "<<b->ch<<endl;

    return 0;
}
// static vs dynamic allocation