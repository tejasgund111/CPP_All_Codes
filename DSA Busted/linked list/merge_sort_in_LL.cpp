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

Node *findMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    if (head == NULL || head->next == NULL)
        return head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node *merge(Node *left, Node *right)
{
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;

    Node *ans = new Node(-1);
    Node *temp = ans;

    // merge 2 sorted linked lists
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;

    return ans;
}

Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    // for dividing the lists in the two halves
    Node *mid = findMid(head);

    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL; // it will come as the end point of the left handed linked list

    // recursively calls to solve both the halves
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both the left and right halves
    Node *result = merge(left, right);

    return result;
}

int main()
{

    return 0;
}