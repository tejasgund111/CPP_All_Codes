#include <iostream>
#include <array>
using namespace std;
template <typename T>
T maxValue(T list[], const int size)
{
    T currentMax = list[0];
    for (int i = 0; i < size; i++)
    {
        if (currentMax < list[i])
        {
            currentMax = list[i];
        }
    }
    return currentMax;
}

int main()
{
    int intArray[] = {1, 2, 4, 2, 5, 3, 1};
    cout << "Max int value is " << maxValue(intArray, 7) << endl;
    return 0;
}