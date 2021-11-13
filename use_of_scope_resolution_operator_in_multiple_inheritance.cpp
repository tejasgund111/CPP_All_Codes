#include<iostream>
using namespace std;
class outer{
    public:
    static int x;
    outer(){
        cout<<"value of x from outer class is "<<x<<endl;
    }
    class inner{
        public:
        int x;
        static int y;
        inner(){
            x=4;
            cout<<"value of y is "<<y<<endl;
            cout<<"value of x from class inner is "<<x<<endl;
            
        }
        
        
    };
};
int outer::inner::y=5;
int outer::x=5;
int main(){
    outer a;
    outer::inner b;
    return 0;
}
