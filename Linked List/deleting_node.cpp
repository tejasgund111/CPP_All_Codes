#include <iostream>
using namespace std;

// struct Node  //In case of structure it will be like this
// {
//     int data;
//     Node *link;
// };

// In case of class it will be like this
class Node
{
public:
    int data;
    Node *link;
};
Node *head = NULL;

void insertBeg(int d)
{
    Node *ptr = new Node();
    ptr->data = d;
    ptr->link = head;
    head = ptr;
}

void deleteNode(Node *head)
{
    if (head->link == NULL)
        delete head;
    swap(head->data, head->link->data);
    Node *temp = head->link;
    head->link = head->link->link;

    delete temp; // if you don't use this then also the code is going to work corect
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->link;
    }
    cout << endl;
}

int main()
{

    insertBeg(4);
    insertBeg(3);
    insertBeg(2);
    insertBeg(1);

    cout << "Before deletion ";
    print(head);

    deleteNode(head->link);
    cout << "After deletion ";
    print(head);

    return 0;
}
