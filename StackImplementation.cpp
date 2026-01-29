// Create a Stack and make a switch case for it...
// 1) Create a Function for creating a stack
// 2) Make a function for pushing into a stack
// 3) Make a function for poping from the stack
// 4) Make a function for deleting the 4th element of a stack
// 5) Make a function to display a stack
// 6) Make a function to return the size of the stack;

#include <iostream>
#include <stack>

using namespace std;

stack<int> push(stack<int> &st, int value)
{
    st.push(value);
    return st;
}

stack<int> pop(stack<int> &st)
{
    st.pop();
}

int top(stack<int> &st)
{
    return st.top();
}

int size(stack<int> &st)
{
    return st.size();
}

void display(stack<int> st)
{
    cout << "The stack has these elements: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

void deleteelement(stack<int> &st, int value2)
{
    stack<int> temp;
    int count = 0;
    while (count != value2)
    {
        temp.push(st.top());
        st.pop();
    }
    st.pop();
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<int> st;
    int choice, value;

    while (true)
    {
        cout << "Welcome to Stack!" << "\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Size\n";
        cout << "5. Display\n";
        cout << "6. Delete an element\n";
        cout << "7. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> value;
            push(st,value);
            cout << value << " Pushed into the stack.\n";
            break;

        case 2:
            pop(st);
            cout << "Value popped successfully!\n";
            break;

        case 3:
            cout << "The top value is: " << top(st);
            break;

        case 4:
            cout << "The size of the stack is: " << size(st);
            break;

        case 5:
            cout << "The Stack is: ";
            while (!st.empty())
            {
                cout << st.top() << " ";
                st.pop();
            }
            break;

        case 6:
            int value2;
            cout << "Which element you want to delete?";
            cin >> value2;
            deleteelement(st, value2);
            break;

        case 7:
            cout << "Exiting...";
            return 0;
        }
    }
}