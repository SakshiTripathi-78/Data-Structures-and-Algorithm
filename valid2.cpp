#include <iostream>
#include <stack>
using namespace std;

// Function to check valid parentheses
bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        // If opening bracket, push to stack
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            // If stack is empty but closing bracket appears → invalid
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            // Compare pairs
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    // Valid only if all opened brackets are closed
    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isValid(s)) 
        cout << "Valid";
    else 
        cout << "Invalid";

    return 0;
}
