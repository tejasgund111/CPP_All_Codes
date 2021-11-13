#include <iostream>
#include <array>
using namespace std;
template <typename T>
T minValue(T list[], const int size)
{
    T currentMin = list[0];
    for (int i = 0; i < size; i++)
    {
        if (currentMin > list[i])
        {
            currentMin = list[i];
        }
    }
    return currentMin;
}

int main()
{
    int intArray[] = {1, 2, 4, 2, 5, 3, 1};
    cout << "Min int value is " << minValue(intArray, 7) << endl;
    return 0;
}