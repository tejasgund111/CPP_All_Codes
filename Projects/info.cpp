#include <iostream>

using namespace std;

int main()
{
    cout << "you have only five choices" << endl;
    int x = 0;
    string name, surname;
    int age, year;

    while (x < 4)
    {
        cout << "1.Enter your name" << endl;
        cout << "2.Enter Surname" << endl;
        cout << "3.Enter year of birth" << endl;
        cout << "4.Age" << endl;
        cout << "--------------------------------------------------------" << endl;
        int a;
        cout << "Enter your choice" << endl;
        cin >> a;
        switch (a)
        {

        case 1:
            cout << "Enter Your name->" << flush;

            cin >> name;
            cout << "Entered name is->" << name << endl;
            break;
        case 2:
            cout << "Enter Surname->" << flush;

            cin >> surname;
            cout << "Entered surname is->" << surname << endl;
            break;
        case 3:
            cout << "Enter year of birth->" << flush;
            cin >> year;
            cout << "Entered year of birth->" << year << endl;
            break;
        case 4:
            cout << "Enter your age ->" << flush;
            cin >> age;
            cout << "Enter age ->" << age << endl;
        default:
            cout << "Something wrong." << endl;
        }
        x++;
    }
    cout<<"Your Entered values are as following"<<endl;
    cout<<"Name     "<<"Surname     "<<"Year of birth       "<<"Age     "<<endl;
    cout<<name<<"     "<<surname<<"           "<<year<<"            "<<age<<endl;
        cout << "program terminated" << endl;

        return 0;
    }
