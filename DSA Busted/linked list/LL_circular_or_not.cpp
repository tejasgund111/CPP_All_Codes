#include<iostream>
using namespace std;

class Node{
public:
    int data; 
    Node*next;
};

bool isCircular(Node *head){
    // empty list
    if(head == NULL)
        return true;
    
    Node *temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head)
        return true;

    return false;
}
// time complexity -> O(n)
// space complexity -> O(1)




int main(){
    
    return 0;
}