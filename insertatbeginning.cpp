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
        head->next->next=new node(30);
        head->next->next->next=new node(40);

        node*temp=head;
        cout<<"Initial ll:\n";
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"\n";
        node*temp1=new node(80);
        temp1->next=head;
        head=temp1;
        while(temp1!=NULL){
            cout<<temp1->data<<"->";
            temp1=temp1->next;
        }
    }