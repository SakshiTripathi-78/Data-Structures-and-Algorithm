#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void enqueue(Node* &head,int data){
    Node* newnode=new Node(data);
    if(head==NULL){
        head=newnode;
        cout<<"Data enqueued succesfully!\n";
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    cout<<"Data enqueued successfully!\n";
}

void dequeue(Node* &head){
    head=head->next;
    cout<<"Data dequeued successfully!\n";
}

void display(Node* head){
    Node* travel=head;
    while(travel!=NULL){
        cout<<travel->data<<"-";
        travel=travel->next;
    }
}

int main(){
    Node* head=NULL;
    int data;
    int choice;
    while(1){
        cout<<"\nWelcome to Queue using linked list!!\n";
        cout<<"1. Insert in the Queue!\n";
        cout<<"2. Delete from the Queue!\n";
        cout<<"3. Display the Queue!\n\n";

        cout<<"Enter your choice : \n";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"You chose to enqueue!\n";
            cout<<"Enter the element you want to enter : ";
            cin>>data;
            enqueue(head,data);
            break;

            case 2:
            cout<<"You want to Dequeue!\n";
            dequeue(head);
            break;

            case 3:
            cout<<"You want to display the Queue!\n";
            cout<<"The Queue is : ";
            display(head);
            break;
        }
    }
}