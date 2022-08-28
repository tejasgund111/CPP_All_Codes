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

node *buildTree(node *root)
{
    cout << "Enter the data :";
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter the data for left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);       
    int ans = max(left, right) + 1;

    return ans;
}

// int height(node* root){
//     if(root == NULL)
//         return 0;

//     else    
//         return 1+ max(height(root->left), height(root->right));
// }


// int res = 0;
// int height(node *root){
//     if(root == NULL)
//         return 0;
//     int left = height(root->left);
//     int right = height(root->right);
//     res = max(res, left+right+1);

//     return 1+max(left, right);
// }

/* this above function will return the height but sets the "res" variable sets to the diameter */

int diameter(node *root)
{
    if (root == NULL)
        return 0;

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1, max(op2, op3));

    return ans;
}

int main()
{
    node *root = NULL;

    //  2 1 7 -1 -1 4 -1 -1 3 -1 -1
    root = buildTree(root);
    cout << endl;

    return 0;
}