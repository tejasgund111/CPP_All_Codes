#include<iostream>
using namespace std;
int main()
{
    const int a=5;
    cout<<"value of a is:"<<a<<endl;
    return 0;
}



/*
#include<iostream>
using namespace std;
int main()
{
    const int a=5;
    a=2;
    a++;
    cout<<"value of a is:"<<a<<endl;
    return 0;
}
*/
//this program will give error because we cannot change the value of any constant



/*constants can also be created by using #define  as follos:
#include<iostream>
#define max 100;
using namespace std;
int main()
{
    const int a=20;
    cout<<"constant using const:"<<a<<endl;
    cout<<"constant using #define :"<<max<<endl;
    return 0;
}

*/
