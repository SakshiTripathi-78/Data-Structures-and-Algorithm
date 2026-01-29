//&st → the stack is passed by reference, so main's stack is updated.
#include<iostream>
#include<stack>

using namespace std;

void push(stack<string> &st){
    st.push("Sakshi ");
    st.push("Ashok ");
    st.push("Tripathi ");
}

int main(){
    stack<string>st;
    push(st);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}