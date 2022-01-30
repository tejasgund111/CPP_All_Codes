#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;

int length()
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void display()
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    cout << "Enter count of nodes -> ";
    int n;
    cin >> n;

    head = new Node();
    cin >> (head->data);
    head->next = NULL;

    Node *p = head;
    for (int i = 1; i < n; i++)
    {
        p->next = new Node();
        p = p->next;
        cin >> (p->data);
    }
    display();

    cout << "Length of the linked list is : " << length() << endl;

    return 0;
}