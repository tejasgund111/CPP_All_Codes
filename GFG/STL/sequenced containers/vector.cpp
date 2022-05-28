/*

int *fun(){
    int *arr[] = new arr[2];
    return arr;
}
// it will be fine and will work properly

vector<int> fun(){
    vector<int > v;
    return v;
}

we can simply copy a vector into another

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*

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

    */

    /*
     int n = 3, x = 10;
     vector<int> v(n, x);                           // all the values in the vector is 10
     for (auto it = v.begin(); it != v.end(); it++) // traversing using iterator
     {
         cout << (*it) << " ";
     }
     cout << endl;
     */

    int arr[] = {10, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n); // here we are passing the address of the first and element after the last
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    for (auto it = v.rbegin(); it != v.rend(); it++) // rbegin() -> points to the last element & rend() -> points to the first element
    {
        cout << (*it) << " ";
    }

    return 0;
}

// v.end() returns the address of the element which is next to the end
// when something is not present in the vector it will return the end which is useful in unordered_set and unordered_map
