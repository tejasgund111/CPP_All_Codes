#include<iostream>
using namespace std;
class id{
    private:
    int a,b;
    public:
    int c,d;
    void hi(int a, int b);
    void bye(int c,int d){
        cout<<"values"<<a<<" "<<b<<" "<<c<<"  "<<d<<endl;

    }



};
void id :: hi(int a1, int b1){
    a=a1;
    b=b1;

}
int main(){
    id Tejas;
    Tejas.hi(1,2);
    Tejas.bye(3,4);
  
    return 0;

}