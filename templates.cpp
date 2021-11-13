#include <iostream>
using namespace std;
template<typename R>
void Fun(R v){
    cout<<"Value of v is "<<v<<endl;
}
template <class T>
void fun1(T a, T b)
{
    cout << "Values of a and b are " << a << "   " << b << endl;
}
template <class T>
void fun2(T x, T y)
{
    cout << "Values of x and y are " << x << "  " << y << endl;
}
template<class T,class B>
void fun3(T d,B p){
    cout<<"values of d and p are "<<d<<"  "<<p<<endl;
}
int main()
{
    Fun<float>(2.3);
    Fun(5.2);
    fun1<int>(2, 3);
    fun1(4,8);  //also same as above
    fun2<char>('j', 'c');
    fun2('2','k'); //also give the same values
    fun3<int,char>(5,'j');
    fun3(3,'g');
    return 0;
}