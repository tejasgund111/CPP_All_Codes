#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;

void deleteNode(Node *head)
{
    if (head->next == NULL)
        delete head;
    swap(head->data, head->next->data);
    Node *temp = head->next;
    head->next = head->next->next;

    delete temp; // if you don't use this then also the code is going to work corect
}

void display(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{

    cout << "Enter count of nodes -> ";
    int n, key;
    cin >> n;

    Node *head = new Node();
    cin >> (head->data);
    head->next = NULL;

    Node *p = head;
    for (int i = 1; i < n; i++)
    {
        p->next = new Node();
        p = p->next;
        cin >> (p->data);
    }
    cout<<"Before deletion  ";
    display(head);
    deleteNode(head->next);  //value of the node which you want to delete
    cout<<"After deletion  ";
    display(head);


    return 0;
}