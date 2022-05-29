#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

class student
{
    string name;
    int roll_no;

public:
    void create_file()
    {
        fstream f1;
        f1.open("file1.txt", ios::app);

        if (!f1)
        {
            cout << "\nError opening file ";
        }
        else
        {
            cout << "\nEnter name : ";
            cin >> name;

            cout << "\nEnter roll number : ";
            cin >> roll_no;

            f1 << name << " ";
            f1 << roll_no << "\n";

            f1.close();
        }
    }

    void display_file()
    {
        fstream f1;
        f1.open("file1.txt", ios::in);

        if (!f1)
        {
            cout << "\nError displaying file";
        }
        else
        {
            while (!f1.eof())
            {

                f1 >> name;
                f1 >> roll_no;
                cout << "\n\n"
                     << "Name : " << name;
                cout << "\n\n"
                     << "Roll Number : " << roll_no;
                cout << "\n";
            }
            f1.close();
        }
    }
};

int main()
{
    int ch = -1;
    student s1;
    while (ch != 0)
    {
        cout << "\n ---- Student Information System ---- ";
        cout << "\n\n 1-Create/Add to Student Info";
        cout << "\n 2-Display Student Info";
        cout << "\n 0-Exit";
        cout << "\n";
        cout << "\n Select an option from the above list : ";
        cin >> ch;
        if (ch == 1)
        {
            s1.create_file();
        }
        else if (ch == 2)
        {

            s1.display_file();
        }
    }
};