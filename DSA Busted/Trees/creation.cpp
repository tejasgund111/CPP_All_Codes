#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data : ";
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
        return NULL;

    cout << "Enter data for inserting to the left of the " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting to the right of the " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// this will give the output in the single line
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
    cout << endl;
}

// this will give the output in the levelwise manner
void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
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

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    inorder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(Node *root)
{
    queue<Node *> q;
    cout << "Enter data for root : ";
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter left node for : " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for : " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    cout << "printing the level order traversal output " << endl;
    levelOrderTraversal(root);
    cout << endl;
    cout << "In the form of the levels " << endl;
    levelorderTraversal(root);

    cout << endl;
    cout << "Inorder traversal -> ";
    inorder(root);
    cout << endl;
    cout << "Preorder traversal -> ";
    preorder(root);
    cout << endl;
    cout << "Postorder traversal -> ";
    postorder(root);
    cout << endl;

    cout << " <--Build tree from the level order traversal ---> " << endl;
    buildFromLevelOrder(root);

    return 0;
};
