#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;


void display(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout<<"NULL";
}

int main()
{

    cout << "Enter count of nodes -> ";
    int n, key;
    cin >> n;

    Node *head = new Node();
    head = new Node();  // this will also work

    cin >> (head->data);
    head->next = NULL;

    Node *p = head;
    for (int i = 1; i < n; i++)
    {
        p->next = new Node();
        p = p->next;
        cin >> (p->data);
    }

    display(head);

    return 0;
}