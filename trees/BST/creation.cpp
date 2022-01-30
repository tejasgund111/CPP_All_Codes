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
}