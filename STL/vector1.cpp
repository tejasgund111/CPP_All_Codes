#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    vector<int>::iterator m;
    for (m = v.begin(); m != v.end(); m++)
    {
        cout << *m << " ";
    }
    cout<<endl;
    vector<int>a(4,1);
    cout<<"here we are giving the size to array 4 and initializing the vactor by 1 "<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<"Also we can copy one vector into another "<<endl;
    
    vector<int>c(v);
    for(int i=0;i<v.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl<<"here we are copied vector v into c "<<endl;


    
    return 0;
}