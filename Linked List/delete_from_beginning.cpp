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

void deleteBeg(Node *head)
{
   if(head == NULL){
       cout<<"List is empty"<<endl;
   }
   else{
       Node *ptr = head;
       head = head -> link;
       delete ptr;
   }
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

    deleteBeg(head);
    cout << "After deletion ";
    print(head);

    return 0;
}