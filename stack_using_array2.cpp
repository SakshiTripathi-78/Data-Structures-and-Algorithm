#include <iostream>
using namespace std;

void push(int arr[], int n, int x, int &top_idx)
{
    if (top_idx < x-1)
    {
        top_idx = top_idx + 1;
        arr[top_idx] = n;
        cout << "The number " << n << " inserted into the stack!\n\n";
    }
    else{
        cout<<"Stack overflow!\n";
    }
    // cout<<"The top value is "<<top_idx<<".\n";
}

void top(int arr[], int &top_idx)
{
    if (top_idx == -1)
    {
        cout << "No top element!\n";
        return;
    }
    cout << arr[top_idx] << "\n";
}

void display(int arr[], int top_idx)
{
    if (top_idx == -1)
    {
        cout << "The stack is empty!\n";
    }
    else
    {
        while (top_idx != -1)
        {
            cout << "\n";
            cout << arr[top_idx] << "\n";
            top_idx = top_idx - 1;
        }
    }
}

void pop(int arr[], int &top_idx)
{
    cout << "The top value is " << top_idx << "\n";
    if (top_idx == -1)
    {
        cout << "Stack is Empty!\n\n";
    }
    else
    {
        top_idx = top_idx - 1;
        cout << "Popped out\n";
    }
}

int main()
{
    int top_idx = -1;
    // cout<<"The top is "<<top_idx<<"\n";
    int x;
    cout << "What should be the size of the stack?\n";
    cin >> x;
    int arr[x];

    while (1)
    {
        cout << "Welcome to Stack\n";
        cout << "1. Push in the stack\n";
        cout << "2. Top of the stack\n";
        cout << "3. Dispaly the stack\n";
        cout << "4. Pop the element from the stack\n";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            int n;
            cout << "Which element to push?\n";
            cin >> n;
            push(arr, n, x, top_idx);
            // cout<<"Coming back to the function : "<<"The top value is "<<top_idx<<"\n";
            break;

        case 2:
            top(arr, top_idx);
            // cout<<"Coming back to the function : "<<"The top value is "<<top_idx<<"\n";
            break;

        case 3:
            display(arr, top_idx);
            break;

        case 4:
            pop(arr, top_idx);
            // cout<<"Coming back to the function : "<<"The top value is "<<top_idx<<"\n";
            break;

        default:
            cout << "Wrong choice\n";
        }
    }
}