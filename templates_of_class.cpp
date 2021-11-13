#include <iostream>
using namespace std;
template <class T, int MAX>
class example
{
    T arr[MAX];

public:
    void accept()
    {
        cout << "Enter " << MAX << " elements " << endl;
        for (int i = 0; i < MAX; i++)
        {
            cin >> arr[i];
        }
    }
    void show()
    {
        cout << "Your elements are " << flush;
        for (int i = 0; i < MAX; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    example<int, 5> obj;
    obj.accept();
    obj.show();

    return 0;
}