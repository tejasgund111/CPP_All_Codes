#include <iostream>
#include <fstream>
using namespace std;
class data
{
public:
    int rollno;
    char name[30];
    char div[30];
    char address[30];
};
class files
{
public:
    data d;
    fstream f1, f2;
    void create()
    {
        cout << "Enter the data : \n";
        cout << "Enter the roll number :- ";
        cin >> d.rollno;
        cout << endl
             << "Enter the name of student - ";
        cin >> d.name;
        cout << endl
             << "Enter the division :- ";
        cin >> d.div;
        cout << endl
             << "Enter the address :- ";
        cin >> d.address;
        cout << endl;
        f1.open("student2.txt", ios::out | ios::app);
        f1.write((char *)&d, sizeof(d));
        f1.close();
    }
    void display()
    {
        f2.open("student2.txt", ios::in);
        while (f2.read((char *)&d, sizeof(d)))
        {
            cout << "\nRoll no :-" << d.rollno << "\tName is " << d.name << "\t Address is " << d.address << "\t division is " << d.div;
        };
        f2.close();
    }

    void Rolldelete()
    {
        int no;
        cout << "\nEnter the roll number to be deleted ";
        cin >> no;
        f1.open("student1.txt", ios::out | ios::app);
        f2.open("student2.txt", ios::in);
        while (f2.read((char *)&d, sizeof(d)))
        {
            if (no != d.rollno)
            {
                f1.write((char *)&d, sizeof(d));
            }
        }
        f1.close();
        f2.close();
        remove("student2.txt");
        rename("student1.txt", "student2.txt");
    }
    int search(int x)
    {
        f1.open("student2.txt", ios::in);
        while (f1.read((char *)&d, sizeof(d)))
        {
            if (x == d.rollno)
            {
                f1.close();
                return 1;
            }
        }
    }
};

int main()
{
    files a;
    int n = 1;
    while (n == 1)
    {
        cout << "\n1.Create\n2.Display\n3.RollDelete\n4.Search\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            a.create();
            break;

        case 2:
            a.display();
            break;
        case 3:
            a.Rolldelete();
            break;
        case 4:
            int x;
            cout << "Enter the number to be search :- ";
            cin >> x;
            int b;
            b = a.search(x);
            if (b == 1)
            {
                cout << "\nfound";
            }
            else
            {
                cout << "\n Not found";
            }
        }
        cout << "\nIf you want to continue then press 1 ";
        cin >> n;
    }
    return 0;
}