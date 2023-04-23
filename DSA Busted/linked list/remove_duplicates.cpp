// here we are going to remove the duplicate elements from the sorted and unsorted linked list

#include<iostream>
using namespace std;

class Node{
public:
    int data; 
    Node*next;
};


// in this list the elements are in the sorted order
Node *uniqueSortedList(Node* head){
    // if the list is empty
    if(head == NULL)
        return NULL;

    Node* curr = head;
    while(curr != NULL){
        if((curr->next!=NULL) && (curr->data == curr->next->data)){
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next = next_next;

        }
        else{
            curr = curr->next;
        }
    }

    return head;
}

// in this list the elementns are in the unsorted manner
Node *uniqueUnsortedList(Node *head){
    if(head == NULL)
         return NULL;
    
    

}


int main(){
    
    return 0;
}