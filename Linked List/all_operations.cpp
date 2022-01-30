#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *head, *newnode, *temp;
int pos;
int n;

void create(int n);
void print();
void addbig();
void addend();
void addspecific(int pos);
void delbeg();
void delend();
void delspecpos();
void getlength();
void reverse();

int main()
{
    int num, choice;
    while (1)
    {
        printf("\nENTER '1' TO CREATE LINKED LIST: \n");
        printf("\nENTER '2' TO ADD NODE AT BEGINNING:  \n");
        printf("\nENTER '3' TO ADD AT NODE THE END OF THE LIST: \n");
        printf("\nENTER '4' TO ADD NODE AT SPECIFIC POSITION: \n");
        printf("\nENTER '5' TO DELETE THE FIRST NODE: \n");
        printf("\nENTER '6' TO DELETE LAST NODE: \n");
        printf("\nENTER '7' TO DELETE A NODE FROM SPECIFIC POSITION: \n");
        printf("\nENTER '8' TO GET LENGTH OF THE LIST: \n");
        printf("\nENTER '9' TO REVERSE THE LIST: \n");
        printf("\nENTER '10' TO EXIT: \n");
        cin >> num;
        switch (num)
        {
        case 1:
            create(n);
            print();
            break;
        case 2:
            addbig();
            print();
            break;
        case 3:
            addend();
            print();
            break;
        case 4:
            addspecific(pos);
            print();
            break;
        case 5:
            delbeg();
            print();
            break;
        case 6:
            delend();
            print();
            break;
        case 7:
            delspecpos();
            print();
            break;
        case 8:
            getlength();
            print();
            break;
        case 9:
            reverse();
            print();
            break;
        case 10:
            printf("bye bye :) !!");
            exit(0);
            break;
        default:
            printf("WRONG CHOICE...!");
        } // end of switch statement
    }     // end of while
    return 0;
}

void create(int n)
{
    printf("enter the length of the list: ");
    cin >> n;
    Node *newnode;
    head = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        newnode = new Node();
        printf("enter the data of node: ");
        cin >> (newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void print()
{
    temp = head;
    printf("\nthe list is:  \n");
    while (temp != 0)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void addbig()
{
    Node *newnode;
    if (head == 0)
    {
        printf("invalid position");
    }
    else
    {
        newnode = new Node();
        printf("\nenter the data of new beginning node: ");
        cin >> (newnode->data);
        newnode->next = head;
        head = newnode;
    }
}

void addend()
{
    Node *newnode;
    temp = head;
    if (head == 0)
    {
        printf("invalied position");
    }
    else
    {
        newnode = new Node();
        printf("\nenter the data of new last node: ");
        cin >> (newnode->data);
        newnode->next = 0;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void addspecific(int pos)
{
    int j;
    printf("\nenter position of newnode:  ");
    cin >> pos;
    Node *newnode;
    if (pos > n || pos < 0)
    {
        printf("invalid position");
    }
    else
    {
        temp = head;
        newnode = new Node();
        printf("\nenter the data of newnode:  ");
        cin >> (newnode->data);
        for (j = 0; j < pos - 2; j++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void delbeg()
{
    printf("\n first node will be deleted....\n");
    if (head == 0)
    {
        printf("lsit is empty");
    }
    else
    {

        temp = head;
        head = head->next;
        delete temp;
    }
}

void delend()
{

    Node *prevnode;
    printf("\nlast node will be deleted....\n");
    temp = head;
    while (temp->next != 0)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        prevnode->next = 0;
    }
    delete temp;
}

void delspecpos()
{
    int x;
    int posi;
    Node *nextnode;
    temp = head;
    printf("\nenter the position of node you want to delete: ");
    cin >> posi;
    for (x = 0; x < posi - 2; x++)
    {
        temp = temp->next;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    delete nextnode;
}

void getlength()
{
    temp = head;
    int count;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    cout << "List length is : " << count << endl;
    ;
}

void reverse()
{
    Node *prevnode, *current, *nextnode;
    prevnode = 0;
    current = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        current->next = prevnode;
        prevnode = current;
        current = nextnode;
    }
    head = prevnode;
}