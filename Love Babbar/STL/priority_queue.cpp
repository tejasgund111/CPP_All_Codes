#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> max;

    // min heap
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(1);
    max.push(8);
    max.push(3);
    max.push(4);

    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    min.push(8);
    min.push(4);
    min.push(6);
    min.push(2);
    min.push(10);

    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout << max.top() << " ";
        min.pop();
    }
    cout << endl;

    cout << "Khaali hai kya bhai?? -> " << min.empty() << endl;

    
    return 0;
}
// when we get the elements from the priority queue we always get the max element from it , in case of max heap and smallest in case of min heap