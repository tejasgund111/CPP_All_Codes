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

// preorder - root left right
void preorder(Node *root)
{
    if (root == 0)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//inorder - left root right
void inorder(Node *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// postorder - left right root
void postorder(Node *root)
{
    if (root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = 0;
    root = create();

    cout << "Preorder is -> ";
    preorder(root);
    cout<<endl;

    cout<<"Inorder is -> ";
    inorder(root);
    cout<<endl;

    cout<<"Postorder is -> ";
    postorder(root);
    cout<<endl;

    return 0;
}