//Binary trees can have at max 2 child nodes.
/*So the following operations will be applied on the BT:
    1) Insertion by the user.
    2) Traversal by the user.
        1) Inorder
        2) Preorder 
        3) Postorder
    3) Delete a node.
*/
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;    // this pointer points to the current data's address.
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insert(Node* root,int data){
    if(root==NULL){
        return new Node(data);
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp->left==NULL){
            temp->left=new Node(data);
            break;
        }
        else{
            q.push(temp->left);
        }
        if(temp->right==NULL){
            temp->right=new Node(data);
            break;
        }
        else{
            q.push(temp->right);
        }
    }
    return root;
}

void display(Node* root){
    if(root==NULL){
        cout<<"TREE IS EMPTY!";
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        else{
            cout<<"-1";
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        else{
            cout<<"-1";
        }
    }
}

int main(){
    Node* root=NULL;
    int data;
    int choice;
    while(1){
        cout<<" Welcome to Binary Trees! \n";
        cout<<" 1. Insertion \n";
        cout<<" 2. Display \n";
        cout<<" 3. Preorder Traversal \n";
        cout<<" 4. Postorder Traversal \n";
        cout<<" 5. Delete a node \n";

        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<" You chose to insert a data into the tree!\n";
                cout<<"Enter the data : ";
                cin>>data;
                root = insert(root,data);
                break;

            case 2:
                cout<<" You chose to display your tree!\n";
                cout<<" Your Tree is : ";
                display(root);
                break;

            default:
                cout<<"Invalid choice!";
        }
    }
}