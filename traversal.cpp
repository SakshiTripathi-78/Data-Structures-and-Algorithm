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
        head->next=new node(20);
        head->next->next=new node(20);
        head->next->next->next=new node(20);
        node*temp=head;
        cout<<"The elements in the ll are:\n";
        while(temp!=NULL){
            cout<<temp->data<<"\n";
            temp=temp->next;
        }
    }