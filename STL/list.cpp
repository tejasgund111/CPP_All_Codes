#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;
    l.push_front(1);
    l.push_front(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    int n=l.size();
    cout<<"size of the list is ->"<<n<<endl;

    list<int>::iterator itr;
    for(itr=l.begin();itr!=l.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    l.remove(6);  //it directly removes the element from the list

    cout<<"before erase size ->"<<n<<endl;
    l.erase(l.begin());   //it removes the element at first index
    cout<<"after erase "<<endl;
    for(itr=l.begin();itr!=l.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    

    
    return 0;
}
//we can merge one list into another by using this way->
//   list1.merge(list2);
// here the merge happens by merging list2 into list1
//reversing the list->    list1.reverse();