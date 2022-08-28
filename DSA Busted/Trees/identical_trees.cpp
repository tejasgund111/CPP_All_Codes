#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL; 
    }
};

bool isIdentical(node *r1, node *r2)
{
    if (r1 == NULL && r2 == NULL)
        return true;
    if (r1 == NULL && r2 != NULL)
        return false;
    if (r1 != NULL && r2 == NULL)
        return false;

    bool left = isIdentical(r1->left, r2->left);
    bool right = isIdentical(r1->right, r2->right);
    bool val = r1->data == r2->data;

    if (left && right && val)
        return true;
    else
        return false;
}

int main()
{

    return 0;
}

// check if the two trees are identical or not