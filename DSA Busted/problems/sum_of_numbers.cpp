#include <iostream>
using namespace std;

void giveSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] != 0)
        {

            sum += arr[i] % 10;
            arr[i] = arr[i] / 10;
        }
        cout << sum << endl;
        sum =0;
    }
}

int main()
{
    int n;
    cout << "Enter your size -> ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    giveSum(arr, n);

    return 0;
} 