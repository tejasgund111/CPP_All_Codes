#include <iostream>
using namespace std;
class abc
{
    static int a;

public:
    void get()
    {
        a=6;
        cout <<"value of static integer is :"<< a << endl;
    };
    static void get1(){
        cout<<"this is static function this can access only the staic members "<<endl;
        cout<<"value of the static variable is "<<a<<endl;
    };
};
int abc::a;  //we can also give value to a here like int abc::a=6;
int main()
{
    abc obj;
    obj.get();
    abc::get1(); //function is called without object

    return 0;
}