#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insert(int data,Node* &head){
    Node*temp=new Node(data);
    if(head==NULL){
        head=temp;
        return;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

void display_in_reverse(Node* head){
    Node* travel=head;
    while(travel->next!=NULL){
        travel=travel->next;
    }
    while(travel!=NULL){
        cout<<travel->data<<"->";
        travel=travel->prev;
    }
}

int main(){
    Node* head=NULL;
    int data;
    while(1){
        int choice;
        int data;
        cout<<"\nWelcome to Doubly Linked List!\n";
        cout<<" 1. Insert in the DDL.\n";
        cout<<" 2. Display the DLL.\n";
        cout<<" 3. Display in reverse.\n";

        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"You chose to insert a data\n";
                cout<<"Enter the number : ";
                cin>>data;
                insert(data,head);
                break;

            case 2:
                cout<<" You want to display the Linked list\n";
                cout<<"The linked list is : ";
                display(head);
                break;

            case 3:
                cout<<"You want to display the linked list in reverse\n";
                cout<<"The linked list is : ";
                display_in_reverse(head);
                break;
        }
    }
}