#include <iostream>
#include <utility>
using namespace std;

int main()
{
    // defining a pair
    pair<int, char> PAIR1;

    // first part of the pair
    PAIR1.first = 100;
    // second part of the pair
    PAIR1.second = 'G';

    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;

    cout << "\n---------------------------------------" << endl;


    // defining a pair
    pair<string, double> PAIR3("GeeksForGeeks", 1.23);

    cout << PAIR3.first << " ";
    cout << PAIR3.second << endl;

    cout << "\n---------------------------------------" << endl;


    pair<int, double> PAIR4;
    pair<string, char> PAIR5;

    // it is initialised to 0
    cout << PAIR4.first;

    // it is initialised to 0
    cout << PAIR4.second;

    cout << " ";

    // // it prints nothing i.e NULL
    cout << PAIR5.first;

    // it prints nothing i.e NULL
    cout << PAIR5.second;

    cout << "\n---------------------------------------" << endl;

    pair<int, char> PAIR1;
    pair<string, double> PAIR2("GeeksForGeeks", 1.23);
    pair<string, double> PAIR3;
 
    PAIR1.first = 100;
    PAIR1.second = 'G';
 
    PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);
 
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
 
    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;
 
    cout << PAIR3.first << " ";
    cout << PAIR3.second << endl;

    cout << "\n---------------------------------------" << endl;


    

    return 0;
}
