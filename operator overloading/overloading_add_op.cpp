#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;

    // complex add(complex c)   //instead of using this line we are using the below line...
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.real = 5;  c1.img = 3;
    c2.real = 10; c2.img = 5;
    
    // c3 = c1.add(c2);
    // c3 = c2.add(c1);  // both gives the same output

    c3 = c1 + c2;  //instead of the above statements we are using this line
    cout << c3.real << " + i " << c3.img << endl;

    return 0;
}

    