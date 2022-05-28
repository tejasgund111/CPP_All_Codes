#include <iostream>
#include <utility>
using namespace std;

int main()
{
    // pair making

    // pair<int ,int> p1(10,30);
    // pair<int, string> p2(10, "Tejas");

    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p2.first<<" "<<p2.second<<endl;

    // pair<int ,int> p3;
    // cout<<p3.first<<" "<<p3.second<<endl;
    // p3 = {90,100};
    // cout<<p3.first<<" "<<p3.second<<endl;

    // // function to make the pair
    // pair<int, int> p4;
    // p4 = make_pair(45,89);
    // cout<<p4.first<<" "<<p4.second<<endl;



    // comparisons of the pairs
    pair<int, int> p1(1, 2), p2(8, 9);
    cout << (p1 == p2) << " "
         << (p1 != p2) << " "
         << (p1 > p2) << " "
         << (p1 < p2) << endl;

    // in case of checking the greater and lesser pair values the first values are used and it is compared
    // if the first values are same then the second value is compared 
    // sorting will be done according to the first value

    return 0;
}


/*

Different ways to initialize pair :  
pair  g1;         //default
pair  g2(1, 'a');  //initialized,  different data type
pair  g3(1, 10);   //initialized,  same data type
pair  g4(g3);    //copy of g3

Another way to initialize a pair is by using the make_pair() function : 
g2 = make_pair(1, 'a');

If not initialized then the pair values will get automatically initialized to zero (0)

*/