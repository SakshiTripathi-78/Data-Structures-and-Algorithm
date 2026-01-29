#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*ptr;

    node(int data){
        this->data=data;
        this->ptr=NULL;
    }
};

int main(){
    int data;
    cin>>data;
    node*head=new node(data);
    cout<<head->data<<"\n";
}