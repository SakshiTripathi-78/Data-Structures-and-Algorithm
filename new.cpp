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

void traverse(Node *head){
    while(head){
        cout<<"[]->"<<head->data;
        head=head->next;
    }
}
int main(){
    // int x;
    // cout<<"enter fist node (+ve)";
    // cin>>x;
    // Node*head=new Node(x);
    // Node*Temp=head;
    bool choice;
    int value;
    
    Node*head=NULL;
    Node*tail=NULL;
    do{
        cout<<"Enter choice and value:";
        cin>>choice>>value;
        Node*temp=new Node(value);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        cout<<tail<<" ";
    }
    while(choice);

    traverse(head);
}