#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int value){
        data=value;
        next=NULL;
    }
};
    int main(){
        node*head=new node(10);
        head->next=new node(90);
        head->next->next=new node(80);
        head->next->next->next=new node(23);
        cout<<"Initial linked list:\n";
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"After adding a new number at the end:\n";
        node*temp1=new node(45);
        temp->next=temp1;
        node*x=head;
        while(temp1!=NULL){
            cout<<temp1->data<<"->";
            temp1=temp1->next;
        }
    }