#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
int x, y, z;
void plusMinus()
{
    double p;
    double z;
    double neg;
    int n;
    cin >> n;

    int positive = 0;
    int negative = 0;
    int zero = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        arr.push_back(m);

        if (arr[i] > 0)
        {
            x = positive++;
        }
        // if (arr[i] < 0)
        // {
        //     y=++negative;
        // }
        // if(arr[i]==0)
        // {
        //     z=++zero;
        // }
    }
    int d = positive;
    double pos = d / n;

    cout << fixed << pos;
    // p = x / n;
    // neg = y / n;
    // z = z / n;

    // cout<<fixed<<p<<endl;
    // cout<<neg<<endl;
    // cout<<z<<endl;
}
int main()
{
    plusMinus();
    return 0;
}