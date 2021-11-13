#include <iostream>

using namespace std;
class student
{
    string name, dob, blood_grp, addr, year;
    int rollno, division, mob;

public:
    student()
    {
        rollno, division, mob = 0;
        name, dob, blood_grp, addr, year = "";
    }
    void getdata()
    {
        cout << "\n Enter student information";
        cout << "\n Enter name";
        cin >> name;
        cout << "\n Enter roll no and division";
        cin >> rollno >> division;
        cout << "\n Enter mobile";
        cin >> mob;
        cout << "\n Enter date of birth";
        cin >> dob;
        cout << "\n Enter blood group";
        cin >> blood_grp;
        cout << "\n Enter address";
        cin >> addr;
        cout << "/n Enter year";
        cin >> year;
    }
    void display()
    {
        cout << "\n name \t roll no \t division \t mob \t date of birth \t blood group \t address \t year";
        cout << "\n"
             << name << "\t" << division << "\t" << mob << "\t" << dob << "\t" << blood_grp << "\t" << addr << "\t" << year;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.display();
}
