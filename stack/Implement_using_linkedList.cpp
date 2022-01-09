#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;
};
Node *top = 0;

void push(int x){
    Node* newnode = new Node();
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}

void display(){
    Node* temp = top;
    if(temp == 0){
        cout<<"Stack is empty"<<endl;
    }
    else{
        while(temp!=0){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
}

void peek(){
    if(top==0){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Top element is "<<top->data<<endl;
    }
}

void pop(){
    if(top==0){
        cout<<"Underflow"<<endl;
    }
    else{
        Node* temp = top;
        cout<<"Popped element is "<<temp->data<<endl;

        top = temp->link;
        // top = top->link;  //this is also the same

        delete temp;
    }
}


int main(){
    push(2);
    push(3);
    push(5);
    push(10);
    
    display();

    cout<<"Top element is ";
    peek();
    cout<<endl;

    pop();

    cout<<"Top element is ";
    peek();
    cout<<endl;

    display();

    return 0;
}