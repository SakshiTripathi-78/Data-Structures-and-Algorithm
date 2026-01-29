#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next= NULL;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insert_at_beg(int data, Node* &head){
    Node*temp=head;
    temp= new Node(data);
    temp->next=head;
    head=temp;
    cout<<data<<" inserted at the beginning of the list!!\n";
}

void insert_at_end(int data, Node* &head){
    Node* travel=head;
    while(travel->next!=NULL){
        travel=travel->next;
    }
    Node* newnode = new Node(data);
    travel->next=newnode;
    cout<<data<<" inserted at the end of the list!!\n";
}

void insert_at_x(int data , int pos , Node* &head){
    //Check whether the position x exists or not?
    //Lets assume that the user will always ask for a valid position.
    Node* pehle=NULL;
    Node* baadme=head;
    int tmp_pos = pos;
    while(tmp_pos--){
        pehle=baadme;
        baadme=baadme->next;
    }
    Node* newnode = new Node(data);
    newnode->next=baadme;
    if(pehle){
        pehle->next=newnode;
    } else {
        head = newnode;
    }
    cout<<data<<" inserted at position "<<pos<<".\n";
}

void display(Node* head){
    Node* traveller = head;
    while(traveller!=NULL){
        cout<<traveller->data<<"->";
        traveller=traveller->next;
    }
}

int main(){
    Node* head=NULL;
    while(1){
        cout<<"\n";
        cout<<" Welcome to Linked List!\n";
        cout<<" 1. Insert at beginning.\n";
        cout<<" 2. Insert at End.\n";
        cout<<" 3. Insert at a position x.\n";
        cout<<" 4. Display the linkedlist.\n\n";
        int choice;
        int data;
        cout<<" Enter your choice : ";
        cin>>choice;
        cout<<"\n";
        switch(choice){
            case 1:
                cout<<"You chose to insert the element in the beginning!\n";
                cout<<" Enter the number : ";
                cin>>data;
                cout<<"\n\n";
                insert_at_beg(data, head);
                break;
            
            case 2:
                cout<<"You chose to insert the element at the end!\n";
                cout<<"Enter the number : ";
                cin>>data;
                cout<<"\n";
                insert_at_end( data, head);
                break;

            case 3:
                int pos;
                cout<<"You chose to insert the element at any position x!\n";
                cout<<"Position : ";
                cin>>pos;
                cout<<"\n";
                cout<<"Enter the number : ";
                cin>>data;
                cout<<"\n";
                insert_at_x(data , pos , head);
                break;

            case 4:
                cout<<"The linked list elements are : ";
                display(head);
                break;
            
            default:
                cout<<"Wrong Choice!\n";
        }
    }
}