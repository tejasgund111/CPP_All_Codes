#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
};

Node *create()
{
    Node *newnode = new Node();
    cout << "Enter data"; // -1 for no node
    int x;
    cin >> x;
    if (x == -1)
    {
        return 0;
    }
    newnode->data = x;

    cout << "Enter left child of " << x << endl;
    newnode->left = create();

    cout << "Enter right child of " << x << endl;
    newnode->right = create();

    return newnode;
}

int main()
{
    Node *root = 0;
    root = create();

    return 0;
}