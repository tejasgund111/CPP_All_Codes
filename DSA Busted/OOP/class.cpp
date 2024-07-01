#include <bits/stdc++.h>
// #include "Main.cpp"
using namespace std;

class Hero
{
    // properties
private:
    int health;

public:
    char *name;
    char level;
    static int time;

    // constructor
    Hero()
    {
        cout << "constructor called" << endl;
        name = new char[100];
    }

    // parametrized constructor
    Hero(int health)
    {
        cout << "this->" << this << endl;
        this->health = health;
    }

    // copy constructor
    // Hero(Hero &temp)
    // {
    //     cout << "copy constructor called" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print()
    {
        cout << "level - " << this->level << endl;
        cout << "health - " << this->health << endl;
        cout << "name - " << this->name << endl;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    static int random()
    {
        return time; // can access only static data member
    }
    ~Hero()
    {
        cout << "Destructor called..." << endl;
    }
};

int Hero ::time = 45; // static data member has to be defined outside the class

int main()
{
    /*
    Hero h1; // creation of object
    // cout << "size : " << sizeof(h1) << endl; // size of object = size of the properties inside class
    // h1.health = 80;
    h1.level = 'A';

    cout << "health is " << h1.getHealth() << endl;
    h1.setHealth(44);
    cout << "health is " << h1.getHealth() << endl;
    cout << "level is" << h1.level << endl;

    */

    /*
     static and dynamic allocation of objects

     Hero a; // static allocation of object
     a.setHealth(80);
     a.setLevel('B');
     cout << "level is " << a.level << endl;
     cout << "health is " << a.getHealth() << endl;

     Hero *b = new Hero; // dynamic allocation of object
     b->setHealth(90);
     b->setLevel('H');
     cout << "level is " << (*b).level << endl;
     cout << "health is " << (*b).getHealth() << endl;

     cout << "level is " << b->level << endl;
     cout << "health is " << b->getHealth() << endl;
    */

    /*
     // object created statically
     Hero ram(10);
     cout << "Address of ram " << &ram << endl;
     ram.getHealth();

     // dynamically
     Hero *h = new Hero(20);
    */

    /*
     Hero suresh;
     suresh.setHealth(80);
     suresh.setLevel('L');
     suresh.print();

     // copy constructor
     Hero ritesh(suresh);
     // it signifies the below lines
     //   ritesh.health = suresh.health;
     //   ritesh.level = suresh.level;
     ritesh.print();
    */

    /*
    // deep and shallow copy
      Hero hero1;
      hero1.setHealth(23);
      hero1.setLevel('O');
      char name[7] = "Babbar";
      hero1.setName(name);
      hero1.print();

      // use default copy constructor
      Hero hero2(hero1);
      hero2.print();
      // Hero hero2 = hero1; // same as above
    */

    /*
     Hero hero1;
     Hero hero2;
     hero1 = hero2; // assignment operator
     // it copies the values of hero2 in hero1
    */

    /*
     // destructor
     // static
     Hero a; // destructor is called automatically for statically allocated objects

     // dynamic
     Hero *b = new Hero(); // destructor have to be called manually
     delete b; // manual calloing
    */

    // static data member
    // cout << Hero ::time << endl; // printing static data member

    // static functions
    // dont have any need to create object
    // don't have this keyword
    // static functions can access only static members
    cout << Hero ::random() << endl;

    return 0;
}
// class is a user defined data type
// object is the instance of the class

// public data members ko class ke bahar bhi access kar sakte hai but private ko class ke andar hi access karna padega

// constructor -> invoked at time of object creation
// -> having no return type

// this-> is a pointer points to the current obect

// destructor -> used to deallocate the memory
// -> name is same as class
// -> does not have any return type
// -> no input parameters

// static data member ko access karne ke liye object banane ki need nahi hoti