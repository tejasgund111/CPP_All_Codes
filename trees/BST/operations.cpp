// Binary Search Tree operations in C++

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
};

// Create a node
Node *newNode(int item)
{
    Node *temp = new Node();
    temp->data = item;
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
        cout << root->data << " -> ";

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
    if (key < node->data)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

int height(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }

    int left = height(node->left);
    int right = height(node->right);

    int ans = max(left, right) + 1;

    return ans;
}

void mirror(Node *node)
{
    if (node == NULL)
        return;
    else
    {
        Node *temp;

        mirror(node->left);
        mirror(node->right);

        /* swap the pointers in this node */
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
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

Node *deleteNode(Node *root, int key)
{
    // Return if the tree is empty
    if (root == NULL)
        return root;

    // Find the node to be deleted
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        // If the node is with only one child or no child
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // If the node has two children
        Node *temp = minValueNode(root->right);

        // Place the inorder successor in position of the node to be deleted
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void search(Node* root, int key, Node* node)
{
    // if the key is not present in the key
    if (root == nullptr)
    {
        cout << "key not found";
        return;
    }
 
    // if the key is found
    if (root->data == key)
    {
        if (node == nullptr) {
            cout << "The node with data " << key << " is root node";
        }
        else if (key < node->data)
        {
            cout << "The given key is the left node of the node with data "
                 << node->data;
        }
        else  {
            cout << "The given key is the right node of the node with data "
                 << node->data;
        }
 
        return;
    }
 
    // if the given key is less than the root node, recur for the left subtree;
    // otherwise, recur for the right subtree
 
    if (key < root->data) {
        search(root->left, key, root);
    } else {
        search(root->right, key, root);
    }
}

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

    cout << "Inorder traversal : ";
    inorder(root);
    cout << endl;

    cout << "Height of tree is -> " << height(root) << endl;

    cout << "\nAfter deleting 10\n";
    root = deleteNode(root, 10);
    cout << "Inorder traversal: ";
    inorder(root);

    mirror(root);
    cout << "Inorder traversal for mirror image of tree is : ";
    inorder(root);

    cout<<endl;
    search(root, 25, NULL);

    return 0;
}