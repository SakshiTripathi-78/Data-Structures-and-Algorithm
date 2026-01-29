#include<iostream>
using namespace std;

void enqueue(int queue[],int data,int &front,int &rear){
    if(front==-1){
        front++;
        rear++;
        queue[front]=data;
        return;
    }
    rear++;
    queue[rear]=data;
    cout<<"Data enqueued into the Queue!\n";
}

void dequeue(int queue[],int &front,int &rear){
    front++;
    cout<<"Data dequeued!\n";
}

void display(int queue[],int front,int rear){
    while(front!=rear){
        cout<<queue[front]<<"-";
        front++;
    }
}

int main(){
    int front=-1;
    int rear=-1;
    cout<<"\n What should be the size of the queue?\n";
    int x;
    cin>>x;
    int queue[x];
    int choice;
    int data;
    while(1){
        cout<<"Welcome to Queue!\n";
        cout<<"1. Insert in the queue.\n";
        cout<<"2. Delete from the queue.\n";
        cout<<"3. Display the Stack.\n\n";

        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter the element which you want to insert\n";
            cin>>data;
            enqueue(queue,data,front,rear);
            break;

            case 2:
            cout<<"You chose to delete from the queue!\n";
            dequeue(queue,front,rear);
            break;

            case 3:
            cout<<"you chose to display the Queue!\n";
            display(queue,front,rear);
            cout<<"The queue is : ";
            break;
        }
    }
}