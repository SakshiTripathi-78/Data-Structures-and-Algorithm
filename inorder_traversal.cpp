/*
    There are three types pf traversals :
        1. Inorder Traversal.
        2. Preorder Traversal.
        3. Postorder Traversal.
    1) Inorder Traversal : left->root->right

*/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node * root)
    {
        if (root == NULL)
        {
            return;
        }
        
    }

int main()
{
    /*
            10
          5     20
         3  7
    */
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->left->right = new Node(7);

    cout<<"Inorder Traversal : ";
    inorder(root);
}