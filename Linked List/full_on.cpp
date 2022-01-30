#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *head;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
int main()
{
    int choice = 0;
    while (choice != 9)
    {
        cout << "\n\n*********Main Menu*********\n";
        cout << "\nChoose one option from the following list ...\n";
        cout << "\n===============================================\n";
        cout << "1.Insert in begining" << endl;
        cout << "2.Insert at last" << endl;
        cout << "3.Insert at any random location" << endl;
        cout << "4.Delete from Beginning" << endl;
        cout << "5.Delete from last" << endl;
        cout << "6.Delete node after specified location" << endl;
        cout << "7.Search for an element" << endl;
        cout << "8.Show" << endl;
        cout << "9.Exit" << endl;

        cout << "\nEnter your choice?\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            cout << "Please enter valid choice..";
        }
    }
    return 0;
}
void beginsert()
{
    Node *ptr;
    int item;
    ptr = new Node();
    if (ptr == NULL)
    {
        cout << "\nOVERFLOW";
    }
    else
    {
        cout << "\nEnter value\n";
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout << "\nNode inserted";
    }
}
void lastinsert()
{
    Node *ptr = new Node();
    int item;
    cout << "Enter data : ";
    cin >> item;
    if (ptr == NULL)
    {
        cout << "OVERFLOW" << endl;
    }
    else
    {
        ptr->data = item;
        ptr->next = NULL;

        if (head == NULL)
        {
            head = ptr;
            cout << "Node inserted " << endl;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            cout << "Node inserted " << endl;
        }
    }
}
void randominsert()
{
    int i, loc, item;
    Node *ptr, *temp;
    ptr = new Node;
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter element value");
        cin >> item;
        ptr->data = item;
        printf("\nEnter the location after which you want to insert ");
        cin >> loc;
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted");
    }
}
void begin_delete()
{
    Node *ptr;
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        delete ptr;
        printf("\nNode deleted from the begining ...\n");
    }
}
void last_delete()
{
    Node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("\nlist is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        delete head;
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        delete head;
        printf("\nDeleted Node from the last ...\n");
    }
}
void random_delete()
{
    Node *ptr, *ptr1;
    int loc, i;
    printf("\n Enter the location of the node after which you want to perform deletion \n");
    cin >> loc;
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            printf("\nCan't delete");
            return;
        }
    }
    ptr1->next = ptr->next;
    delete ptr;
    printf("\nDeleted node %d ", loc + 1);
}
void search()
{
    Node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        cin >> item;
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("item found at location %d ", i + 1);
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Item not found\n");
        }
    }
}

void display()
{
    Node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }
}