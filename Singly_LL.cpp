#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insert(int data,Node* head){
    Node* temp = head;
    temp = new Node(data);
    temp -> next = head;
    head = temp;
}

int main(){
    Node* head = NULL;
    int choice;
    while(1){
        cout << "Welcome to Linked List\n";
        cout << "1. Insert.\n";
        cout << "1. Display.\n\n";
        switch(choice){
            case 1:
                int data;
                cout<< "Enter the Element : ";
                cin>> data;
                insert(data,head);
            case 2:
                
        }
    }

}