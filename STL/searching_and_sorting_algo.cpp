//Searching and sorting algorithms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> myvect;
    myvect.push_back(4);
    myvect.push_back(8);
    myvect.push_back(40);
    myvect.push_back(6);
    for (int i = 0; i < myvect.size(); i++)
    {
        cout << myvect[i] << " ";
    }
    cout << endl;
    vector<int>::iterator v;
    sort(myvect.begin(), myvect.end()); //it gives the elements in sorted order
    cout << "Sorted elements are as follows " << endl;
    for (v = myvect.begin(); v != myvect.end(); v++)
    { //printing vector using iterator
        cout << *v << " ";
    }
    cout<<endl;
    //Searching algorithm
    if(binary_search(myvect.begin(),myvect.end(),40)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}
