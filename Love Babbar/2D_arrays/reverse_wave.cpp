#include <iostream>
using namespace std;
#define R 4
#define C 4
void printReverseWaveForm(int m, int n, int arr[R][C])
{
    int i, j = n - 1, wave = 1;
    while (j >= 0)
    {
        if (wave == 1)
        {
            for (i = 0; i < m; i++)
                cout << arr[i][j] << " ";
            wave = 0;
            j--;
        }
        else
        {
            for (i = m - 1; i >= 0; i--)
                cout << arr[i][j] << " ";
            wave = 1;
            j--;
        }
    }
}
int main()
{
    int arr[R][C] = {
        {1, 5, 7, 98},
        {15, 22, 45, 12},
        {5, 10, 21, 34},
        {31, 24, 45, 60}};
    cout << "Reverse Wave Form of the given matrix :\n";
    printReverseWaveForm(R, C, arr);
    return 0;
}