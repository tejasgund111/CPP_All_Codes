#include<bits/stdc++.h>
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

void inorder(node* root , int &count){
    if(root == NULL)
        return;
    inorder(root->left,count);
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    inorder(root->right, count);
}

int countLeafNodes(node *root){
    int count = 0;
    inorder(root, count);
    return count;
}

int main(){
    node *root = NULL;

    //  2 1 7 -1 -1 4 -1 -1 3 -1 -1
    root = buildTree(root);
    cout << endl;

    cout<<"Count of leaf nodes are "<<countLeafNodes(root)<<endl;
    
    return 0;
}