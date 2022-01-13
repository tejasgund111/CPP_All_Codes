// C++ program to demonstrate removal from a vector of vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initializing 2D vector "vect" with
    // sample values
    vector<vector<int>> vec{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    // Removing elements from the last row of the vector
    vec[2].pop_back();
    vec[1].pop_back();

    for (int i = 0; i < 3; i++)
    {
        for (auto it = vec[i].begin(); it != vec[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
