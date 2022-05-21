#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left = NULL;
    Node *right = NULL;
};

Node *insert(Node* &root, int value)
{
    if (root == NULL)
    {
        Node *temp = new Node();
        temp->data = value;
        temp->left = temp->right = NULL;
        return temp;
    }

    // if the value is less than the value of the root
    if (value < root->data)
        root->left = insert(root->left, value);
    // if the value is greater than the value of the root
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}

void display(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

int main()
{
    Node *root = new Node();
    root->data = 10;
    insert(root, 9);
    insert(root, 11);
    insert(root, 7);
    insert(root, 34);

    display(root);

    return 0;
}