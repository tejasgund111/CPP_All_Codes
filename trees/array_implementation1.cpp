// C++ implementation of tree using array numbering starting from 0 to n-1.

#include <bits/stdc++.h>
using namespace std;
char tree[11];

int root(char key)
{
    if (tree[0] != '\0')
        cout << "Tree already had root";
    else
        tree[0] = key;
    return 0;
}

int set_left(char key, int parent)
{
    if (tree[parent] == '\0')
        cout << "\nCan't set child at"
             << (parent * 2) + 1
             << " , no parent found";
    else
        tree[(parent * 2) + 1] = key;
    return 0;
}

int set_right(char key, int parent)
{
    if (tree[parent] == '\0')
        cout << "\nCan't set child at"
             << (parent * 2) + 2
             << " , no parent found";
    else
        tree[(parent * 2) + 2] = key;
    return 0;
}

int print_tree()
{
    cout << "\n";
    for (int i = 0; i < 11; i++)
    {
        if (tree[i] != '\0')
            cout << tree[i];
        else
            cout << "-";
    }
    return 0;
}

int main()
{
    root('A');
    // insert_left('B',0);
    set_left('B', 0);
    set_right('C', 0);
    set_left('D', 1);
    set_right('E', 1);
    set_left('F', 2);
    set_right('G', 2);
    set_left('H', 4);
    set_right('I', 4);
    
    print_tree();
    return 0;
}
