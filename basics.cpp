#include<iostream>
#include<stack>

using namespace std;

void push(stack<string>st){
    st.push("Sakshi ");
    st.push("Ashok ");
    st.push("Tripathi ");
    while(!st.empty()){
       cout<<st.top();
        st.pop();
    }
}

int main(){
    stack<string>st;
    //stack<int>st={"sakshi","ashok","tripathi"}; Wrong way to initialize a stack!
    push(st);
}