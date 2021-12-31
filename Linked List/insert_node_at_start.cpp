#include <iostream>
using namespace std;

// struct Node  //In case of structure it will be like this
// {   
//     int data;
//     Node *link;
// };

//In case of class it will be like this
class Node
{   public:
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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->link;
    }
}

int main()
{

    insertBeg(4);
    insertBeg(3);
    insertBeg(2);
    insertBeg(1);

    print(head);

    return 0;
}