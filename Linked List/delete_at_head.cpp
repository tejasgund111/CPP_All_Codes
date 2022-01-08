#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;

void deleteBeg(Node* &head){
    Node *temp = head;
    head = head-> next;  //pointing head to next address
    delete temp;
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

int main(){
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
    deleteBeg(head);
    display(head);

    return 0;
}