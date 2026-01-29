#include<iostream>
using namespace std;

class node{
    int data;
    node*next=NULL;

    node(int value){
        data=value;
        next=NULL;
    }
};
node* middleelement(node*head,int i,int j){
    node*temp1=head;
    node*temp2=

}

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