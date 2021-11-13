#include<iostream>
#include<cmath> //or #include<<math.h>
using namespace std;
int main(){
    cout<<"...................This part is for strings................"<<endl;
    string phrase="Girraffe Academy";
    cout<<phrase.length()<<endl;
    phrase[0]='B';
    cout<<phrase<<endl;
    cout<<phrase[3]<<endl;
    cout<<phrase.find("Academy")<<endl;
    cout<<phrase.substr(0,5)<<endl;       //gives substring of the parameters that we have passed
    // 0 is starting index and 5 is ending index
    cout<<"____________________________________________________________________________________________________"<<endl;

    cout<<"------------------------This part is for numbers------------------------------"<<endl;

    cout<<10%3<<endl; //this gives us the remainder on division i.e. 1
    cout<<"2 to the power 3: "<<pow(2,3)<<endl;
    cout<<"square root of 36 :"<<sqrt(36)<<endl;
    cout<<"rouned no. :"<<round(2.33)<<endl;
    cout<<"rouned no. :"<<round(4.69)<<endl;
    cout<<"This is like ceiling function : "<<ceil(4.1)<<endl;
    cout<<"This is like floor function : "<<floor(4.9)<<endl;
    cout<<"Gives max. no. : "<<max(4,2)<<endl;
    cout<<"Also gives max no. : "<<fmax(5,79)<<endl;
    cout<<"Gives min no. : "<<min(5,79)<<endl;
    cout<<"Also gives min no. : "<<fmin(5,79)<<endl;
    cout<<"____________________________________________________________________________________________________"<<endl;

    cout<<"-------------------------This is for getting input from user--------------------------------------"<<endl;
    string input;
    // cout<<"enter your name: ";
    // cin>>input;
    // cout<<"your name is "<<input<<endl;
    //by using getline
    cout<<"Enter your name again :";
    getline(cin,input);
    cout<<"Hello ! "<<input<<endl;
    //see the difference, for only in case of long texts use getline otherwise cin is good.
    cout<<"_____________________________________________________________________________________________"<<endl;

    cout<<"................................This part is for making simple calculator...................................."<<endl;
    int num1,num2;
    cout<<"Enter 1st no. : ";
    cin>>num1;
    cout<<"Enter 2nd no. : ";
    cin>>num2;
    cout<<"Your addition ="<<num1 + num2<<endl;
    cout<<"Your subtaractiob ="<<num1 - num2<<endl;
    cout<<"Your multiplication ="<<num1 * num2<<endl;
    cout<<"Your division ="<<num1/num2<<endl;
    cout<<"_________________________________________________________________________________________________"<<endl;

    cout<<"................................This part is for making simple mad libs...................................."<<endl;
    string name,fathername,mothername;
    cout<<"For your inquiry..."<<endl;
    cout<<"Enter your name :";
    getline(cin,name);
    cout<<"Enter your fathername :";
    getline(cin,fathername);
    cout<<"Enter your mothername :";
    getline(cin,mothername);
    cout<<"Hi ! I am "<<name<<endl;
    cout<<"My father name is "<<fathername<<endl;
    cout<<"My mothername is "<<mothername<<endl;
    cout<<"So that's fine. You may go now..."<<endl;
    cout<<"_________________________________________________________________________________________________"<<endl;



    return 0;
}