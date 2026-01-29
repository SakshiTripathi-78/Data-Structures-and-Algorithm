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

void insert(int data , Node* &head){
    Node* temp=head;
    temp= new Node(data);
    temp->next=head;
    head=temp;
}

void delete_first(Node* &head){
    Node* temp=head;
    head=temp->next;
    cout<<"First element deleted!\n";
}

void delete_last(Node* &head){
    Node* travel=head;
    while(travel->next->next!=NULL){
        travel=travel->next;
    }
    travel->next=NULL;
    cout<<"Last node deleted!\n";
}

void delete_pos(int x , Node* &head){
    //Assume that the position is not first and last.
    Node* traveller=head;
    int n=x-1;
    while(n--){
        traveller=traveller->next;
    }
    traveller->next=traveller->next->next;
    cout<<"Node deleted!\n";
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

int main(){
    Node* head=NULL;
    int data;
    while(1){
        int choice;
        cout<<"\n Welcome to Linked List!\n";
        cout<<" 1. Insert in the Linked List.\n";
        cout<<" 2. Delete at the first position.\n";
        cout<<" 3. Delete at the end.\n";
        cout<<" 4. Delete at a position x.\n";
        cout<<" 5. Display the Linked List.\n\n";

        cout<<" Enter the choice : ";
        cin>>choice;
        cout<<"\n";
        switch(choice){
            case 1:
                int data;
                cout<<"You want to insert an element in a Linked List!\n";
                cout<<"Enter the Element you want to insert : ";
                cin>>data;
                insert(data , head);
                break;

            case 2:
                cout<<"You want to delete the first element!\n";
                delete_first(head);
                break;

            case 3:
                cout<<"You want to delete the last element!\n";
                delete_last(head);
                break;

            case 4:
                int x; 
                cout<<"You want to delete element at position x!\n";
                cout<<"Enter the position x which you want to delete : ";
                cin>>x;
                delete_pos(x , head);
                break;

            case 5:
                display(head);
                break;

            default:
                cout<<"Wrong Choice!\n";
        }
    }
}