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
    while(head){
        cout<<head->data;
        head=head->next;
    }
};
node* insertatfifthpos(node*head,int pos,int data){
    node*temp=head;
    node*newnode=new node(data);
    while(pos>1){
        temp=temp->next;
        pos--;
    }
    node*pointer=temp->next;
    temp->next=newnode;
    newnode->next=pointer;
    return head;
};

int main(){
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    node*head=NULL;
    node*tail=NULL;
    do{
        int value;
        cout<<"Enter the data of the linked list";
        cin>>value;
        node*temp=new node(value);
       if(head==NULL){
        head=temp;
        tail=temp;
       }
       else{
        tail->next=temp;
        tail=temp;
       }
    }
    while(n--);
    insertatfifthpos(head,5,10);
    traverse(head);
    return 0;
}