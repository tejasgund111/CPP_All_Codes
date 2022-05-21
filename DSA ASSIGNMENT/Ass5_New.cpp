#include <iostream>
using namespace std;

class dictionary;
class node
{
    string word, meaning;
    node *left, *right;

public:
    friend class dictionary;
    node()
    {
        left = right = NULL;
    }
    node(string word, string meaning)
    {
        this->word = word;
        this->meaning = meaning;
        left = right = NULL;
    }
};

class dictionary
{

public:
    node *root;
    dictionary()
    {
        root = NULL;
    }

    // insertion of the node in the bst
    bool insert(string word, string meaning)
    {
        node *p = new node(word, meaning);
        if (root == NULL)
        {
            root = p;
            return true;
        }

        node *cur = root;
        node *par = root;
        // traversal
        while (cur != NULL)
        {
            if (word > cur->word)
            {
                par = cur;
                cur = cur->right;
            }
            else if (word < cur->word)
            {
                par = cur;
                cur = cur->left;
            }
            else
            {
                cout << "the word is already inserted." << endl;
                return false;
            }
        }

        // insertion of the node
        if (word > par->word)
        {
            par->right = p;
            return true;
        }
        else
        {
            par->left = p;
            return true;
        }
    }

    // making the words and the meanings
    void create()
    {
        int n;
        string word1, meaning1;
        cout << "How many word to insert ? " << endl;
        cin >> n;
        while (n--)
        {
            cout << "Enter word";
            cin >> word1;
            cout << "Enter meaning ";
            cin >> meaning1;
            insert(word1, meaning1);
        }
    }

    // search the keyword
    int search(string key)
    {
        node *temp = root;
        int count;

        if (temp == NULL)
            return -1;

        if (root->word == key)
            return 1;

        while (temp != NULL)
        {
            if (key > temp->word)
            {
                temp = temp->right;
                count++;
            }
            else if (key < temp->word)
            {
                temp = temp->left;
                count++;
            }
            else if (key == temp->word)
            {
                return ++count;
            }
        }

        return -1;
    }

    //  (ascending order)
    void increasing(){
        inorder(root);
    }
    void inorder(node *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        cout << " " << root->word << " : " << root->meaning << endl;
        inorder(root->right);
    }

    // (descending order)
    void decreasing(){
        postorder(root);
    }
    void postorder(node *root)
    {
        if (root == NULL)
            return;
        postorder(root->left);
        postorder(root->right);
        cout << " " << root->word << " : " << root->meaning << endl;
    }
};

int main()
{
    string word;
    dictionary dict;

    dict.create();

    cout << "Ascending order " << endl;
    dict.increasing();

    cout << "\nDescending order:\n";
    dict.decreasing();

    cout << "\nEnter word to search: ";
    cin >> word;
    int comparisons = dict.search(word);
    if (comparisons == -1)
    {
        cout << "\nNot found word";
    }
    else
    {
        cout << "\n " << word << " found in " << comparisons << " comparisons";
    }

    return 0;
}
