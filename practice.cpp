#include <iostream>
using namespace std;

/*
        Singly Linked List
    Node => data, next
Funtions ?
    insert at position
    display
    delete
*/

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            data = this->data;
            next = NULL;
        }
};

void insertAtPos(int pos, int data, Node* linkedList){
/*
    Considerations ?
    1. Does the pos exist ? How to check ? -> if pos > siz -> pos does not exist
*/
    int s = 0;
    Node* temp = linkedList;
    while(temp){
        s++;
        temp = temp->next;
    }
    if(pos > s){ // check if it should be > or >=
        cout << "position: " << pos << " does not exist! Linked list size is: "<< s <<"\n";
        return;
    }
    // We need three nodes here.
    // previous to pos -> 
    // next to pos -> 
    // the one which is to be inserted - We have this.
    Node* newnode = new Node(data);
    Node* prev = linkedList;
    Node* post = linkedList;
    while(pos--){
        prev = post;
        post = post->next;
    }
    newnode->next = post;
    prev->next = newnode;
}

void display(Node* linkedList){
    Node* temp=linkedList;
    while(temp!=NULL){
        cout<<temp->data<<"->";
    }
}

void deleteAtPos(int pos, Node* linkedList){

}

int main(){
    int choice;
    cin>>choice;
    while(1){
        switch(choice){
            case 1:
                
        }

    }

}