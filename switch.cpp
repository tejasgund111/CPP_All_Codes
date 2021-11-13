#include<iostream>
using namespace std;
string getday(int daynum){
    string dayname;
    switch(daynum){
        case 1:
        dayname="sunday";
        break;
        case 2:
        dayname="monaday";
        break;
        case 3:
        dayname="Tuesday";
        break;
        case 4:
        dayname="Wednesday";
        break;
        case 5:
        dayname="Thursday";
        break;
        case 6:
        dayname="Friday";
        break;
        case 7:
        dayname="Saturday";
        break;
        default:
        dayname="invalid";
    }
    return dayname;

}
int main(){
    cout<<"/n"<<getday(5)<<endl;

    return 0;

}