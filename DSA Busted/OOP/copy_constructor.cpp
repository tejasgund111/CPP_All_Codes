#include <iostream>
using namespace std;
class hero
{
public:
    int data;
    char ch;

    hero(int value, char c)
    {
        data = value;
        ch = c;
    }
    
    //copy constructor
    hero(hero& temp){
        cout<<"Copy constructor called "<<endl;
        this->data = temp.data;
        this->ch = temp.ch;
    }

    void print()
    {
        cout << "Data : " << data << endl;
        cout << "ch : " << ch << endl;
    }
};
int main()
{
    hero Tejas(10, 'T');
    Tejas.print();
    // using default constructor
    hero Rohan(Tejas); // here we copied our object Tejas into Rohan
    Rohan.print();  // here the copy constructor will be called

    // One more way
    hero arjun = Tejas;
    arjun.print();

    return 0;
}