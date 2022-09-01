#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (root->data > data)
        root->left = insertIntoBST(root->left, data);
    else
        root->right = insertIntoBST(root->right, data);

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// recursive approach
bool search(Node *root, int data)
{
    if (root == NULL)
        return false;
    if (root->data == data)
        return true;
    if (data > root->data)
        return search(root->right, data);
    else
        return search(root->left, data);

    return false;
}

// iterative approach
// bool search(Node *root, int data)
// {
//     Node *temp = root;
//     while (temp != NULL)
//     {
//         if (temp->data == data)
//             return true;
//         if (data > temp->data)
//             temp = temp->right;
//         else
//             temp = temp->left;
//     }
//     return false;
// }

Node *minValue(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp;
}

Node *maxValue(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp;
}

Node *deleteFromBST(Node *root, int value)
{
    if (root == NULL)
        return root;
    if (root->data == value)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int min = minValue(root->right)->data;
            root -> data = min;
            root -> right = deleteFromBST(root-> right, min);
            return root;
        }
    }
    else if (root->data > value)
    {
        root->left = deleteFromBST(root->left, value);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, value);
        return root;
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter the data to the BST : " << endl;
    takeInput(root);

    cout << "printing in inorder format : ";
    inorder(root);
    cout << endl;

    int data;
    cout << "Enter the item to be searched : ";
    cin >> data;
    if (search(root, data))
        cout << "Element present" << endl;
    else
        cout << "Element is absent" << endl;

    return 0;
}
