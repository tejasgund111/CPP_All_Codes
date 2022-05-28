/*

int *fun(){
    int *arr[] = new arr[2];
    return arr;
}   // it will be fine and will work properly

vector<int> fun(){
    vector<int > v;
    return v;
}

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // also can be done by v.at(i) -> this do array index out of bound checking, it will throw an exception
        // same is not done by v[i]
    }
    cout << endl;
    // traversing
    for (int i : v)
    {
        // if we wanna change any element in the vector then it cannot be done by this loop we have to take the address of the vector elements ->  for(int &i: v)
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
