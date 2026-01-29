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
void traverse(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    node*head=new node(5);
    head->next=new node(8);
    head->next->next=new node(10);
    traverse(head);
}