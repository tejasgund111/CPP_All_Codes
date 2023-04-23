#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
    }
};

// Approach 1:
//  in this approach we are counting the count of 0,1 and 2 and then making change in the linked list
Node *sortList(Node *head)
{
    int zero = 0, one = 0, two = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
            zero++;
        else if (temp->data == 1)
            one++;
        else if (temp->data == 2)
            two++;

        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        if (zero != 0)
        {
            temp->data = 0;
            zero--;
        }
        else if (one != 0)
        {
            temp->data = 1;
            one--;
        }
        else if (two != 0)
        {
            temp->data = 2;
            two--;
        }
        temp = temp->next;
    }

    return head;
}

// Approach 2:
void insertAtTail(Node* &tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}

Node *sortLList(Node *head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;
    // create separate list for 0's,1's and 2's
    while (curr != NULL)
    {
        int val = curr->data;
        if (val == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (val == 1)
            insertAtTail(oneTail, curr);
        else if (val == 2)
            insertAtTail(twoTail, curr);

        curr = curr->next;
    }

    // merge 3 sublists

    // 1's list not empty
    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    { // 1's list empty
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // setup Head
    head = zeroHead->next;

    // delete dummynodes

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main()
{

    return 0;
}