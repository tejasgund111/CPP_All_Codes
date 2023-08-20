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
    }
};

Node *builtTree(vector<int> preorder, vector<int> inorder)
{
    map<int, int> mp;
    for (int i = 0; i < inorder.size(); i++)
    {
        mp[inorder[i]] = i;
    }
    Node *root = build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mp);
    return root;
}

Node *build(vector<int> preorder, int preStart, int preEnd, vector<int> inorder, int inStart, int inEnd, map<int, int> mp)
{
    if (preStart > preEnd || inStart > inEnd)
        return NULL;

    Node *root = new Node(preorder[preStart]);

    int inRoot = mp[root->data];
    int numsLeft = inRoot - inStart;

    root->left = build(preorder, preStart + 1, preStart + numsLeft, inorder, inStart, inRoot - 1, mp);
    root->right = build(preorder, preStart + numsLeft + 1, preEnd, inorder, inRoot + 1, inEnd, mp);

    return root;
}

int main()
{

    return 0;
}