// add 2 numbers represented by the linked list

// i/p : 2->1->3->NULL  
//       3->7->8->NULL
// o/p:  5->9->1->NULL


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
        this->next = next;
    }
};

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *add(Node *first, Node *second)
{
    int carry = 0;
    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        if (first != NULL)
            val1 = first->data;

        int val2 = 0;
        if (second != NULL)
            val2 = second->data;

        int sum = carry + val1 + val2;
        int digit = sum % 10; // unit place number

        // create node and add in answer linked list
        insertAtTail(ansHead, ansTail, digit); // making node of the digit
        carry = sum / 10;                      // 10'th place number means the carry which is remaining

        if (first != NULL)
            first = first->next;
        if (second != NULL)
            second = second->next;
    }

    return ansHead;
}

// Function to add two numbers represented by linked list.
Node *addTwoLists(Node *first, Node *second)
{
    // code here
    // step 1: reverse input linked list
    first = reverse(first);
    second = reverse(second);

    // step 2: add 2 ll
    Node *ans = add(first, second);

    // step 3: reverse ans;
    ans = reverse(ans);

    return ans;
}
int main()
{

    return 0;
}