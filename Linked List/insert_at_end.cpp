#include <iostream>
using namespace std;

void lastinsert(int);
class Node
{
public:
    int data;
    Node *next;
};
Node *head;

int main()
{
    int choice, item;
    do
    {
        printf("\nEnter the item which you want to insert?\n");
        cin >> item;
        lastinsert(item);
        printf("\nPress 0 to insert more ?\n");
        cin >> choice;

    } while (choice == 0);

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }

    return 0;
}
void lastinsert(int item)
{
    Node *ptr = new Node();

    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr->data = item;
        ptr->next = NULL;

        if (head == NULL)
        {
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            printf("\nNode inserted");
        }
    }
}
