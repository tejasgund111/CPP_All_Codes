// Binary Search Tree operations in C++

#include <iostream>
using namespace std;

class Node
{
    public:
    int key;
    Node *left, *right;
};

// Create a node
Node *newNode(int item)
{
    Node *temp = new Node();
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Inorder Traversal
void inorder(Node *root)
{
    if (root != NULL)
    {
        // Traverse left
        inorder(root->left);

        // Traverse root
        cout << root->key << " -> ";

        // Traverse right
        inorder(root->right);
    }
}

// Insert a node
Node *insert(Node *node, int key)
{
    // Return a new node if the tree is empty
    if (node == NULL)
        return newNode(key);

    // Traverse to the right place and insert the node
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

// Find the inorder successor
Node *minValueNode(Node *node)
{
    Node *current = node;

    // Find the leftmost leaf
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

// Deleting a node
Node *deleteNode(Node *root, int key)
{
    // Return if the tree is empty
    if (root == NULL)
        return root;

    // Find the node to be deleted
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        // If the node is with only one child or no child
        //Right child
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        //Left child
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // If the node has two children
        Node *temp = minValueNode(root->right);

        // Place the inorder successor in position of the node to be deleted
        root->key = temp->key;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

// Driver code
int main()
{
    Node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);

    cout << "Inorder traversal: ";
    inorder(root);

    cout << "\nAfter deleting 10\n";
    root = deleteNode(root, 10);
    cout << "Inorder traversal: ";
    inorder(root);
}