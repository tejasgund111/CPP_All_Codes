#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    vector<int>::iterator i = v.begin();
    // shortcut for the above line is ->   auto : i

    cout << (*i) << " ";

    i = v.end();
    i--;
    cout << (*i) << " ";

    i = next(i); // get the iterator above the given position ahead
    // and if you not pass the number of the positions then it gives the just next position

    i = next(i, 2); // it will move the 2 positions ahead

    i = prev(i); // it will move one position back

    advance(i, 3); // iterator will move to the 3 positions ahead   ...  it will modify the iterator position

    return 0;
}

// we can do pointer arithmetic to the iterators
// ex.
//   list <int> :: iterator i;

// in case of the forward list iterator we cannot move the iterator to the backward side...


// Iterators types -
// 1.Input
// 2.Output
// 3.Forward
// 4.Bidirectional
// 5.Random

// these are just logical classification of the iterators