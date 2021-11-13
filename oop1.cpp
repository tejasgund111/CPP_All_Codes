#include<iostream>
using namespace std;
class database{
    public:
    string name,division,blood_grp;
    int rollno,dob;

    database(){
    
        cout<<"...........student information.........."<<endl;
    
    }
  
    ~database(){
        cout<<"End of program."<<endl;
    }
    void getdata(){
        cout<<"name:"<<flush;
        cin>>name;
        cout<<"division:"<<flush;
        cin>>division;
        cout<<"blood_grp:"<<flush;
        cin>>blood_grp;
        cout<<"rollno:"<<flush;
        cin>>rollno;
        cout<<"dob:"<<flush;
        cin>>dob;

    }
};
int main(){
    database student1;

    student1.getdata();
    
    return 0;
}