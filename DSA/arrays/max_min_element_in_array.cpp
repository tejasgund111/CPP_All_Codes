#include <iostream>
using namespace std;
int getMin(int num[], int n)
{
    int min = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
int getMax(int num[], int n)
{
    int max = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Max element : " << getMax(num, size) << endl;
    cout << "Min element : " << getMin(num, size) << endl;
    return 0;
}
